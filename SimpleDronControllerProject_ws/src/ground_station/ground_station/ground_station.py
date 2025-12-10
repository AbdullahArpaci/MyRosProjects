import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from drone_interfaces.msg import DroneTelemetry
from drone_interfaces.srv import MissionDispatch
from drone_interfaces.action import ScanSurroundings

class GroundStation(Node):
    def __init__(self):
        super().__init__("GroundStation")

        self.subscriber = self.create_subscription(
            DroneTelemetry, 
            "/ground_station", 
            self.subscriber_callback, 
            10
        )

        self._scan_client = ActionClient(self, ScanSurroundings, "/scanMission")
        self.drone_data = {} 
        self.timer = self.create_timer(1.0, self.show_drones_info)

        self.client = self.create_client(MissionDispatch, "/mission")
        while not self.client.wait_for_service(1.0):
            self.get_logger().info("Servis bekleniyor...")
            
        self.request = MissionDispatch.Request()

    def send_scan_command(self, angle=360):
        self.get_logger().info("Tarama komutu gönderiliyor...")
        goal_msg = ScanSurroundings.Goal()
        goal_msg.target_angle = angle
        
        self._scan_client.wait_for_server()
        self._send_goal_future = self._scan_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback
        )
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def feedback_callback(self, feedback_msg):
        angle = feedback_msg.feedback.current_angle
        percent = feedback_msg.feedback.percent_complete
        self.get_logger().info(f">> [CANLI YAYIN] Drone Tarıyor: %{percent} (Açı: {angle})")

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Tarama reddedildi.')
            return
        self.get_logger().info('Tarama kabul edildi, işlem sürüyor...')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f"SONUÇ: Bulunan Nesneler: {result.detected_objects}")

    def subscriber_callback(self, msg):
        self.drone_data[msg.drone_id] = {
            "battery_level": msg.battery_level,
            "flight_mode": msg.flight_mode,
            "position": msg.position
        }

    def show_drones_info(self):
        if not self.drone_data:
            print("Henüz Drone Verisi Yok...")
            return
        for drone_id, info in self.drone_data.items():
            print(f"ID: {drone_id} | Bat: {info['battery_level']:.1f} | Mod: {info['flight_mode']}")

    def send_command(self, target_id, mission_type, position):
        self.request.target_drone_id = target_id 
        self.request.mission_type = mission_type
        self.request.target_loc = position
        return self.client.call_async(self.request)

def main():
    rclpy.init()
    GroundStationNode = GroundStation()
    
    # 1. GÖREV: UÇUŞ (Service)
    target_loc = [20.0, 10.0, 10.0] 
    future = GroundStationNode.send_command(1, "Waypoint Atama", target_loc)
    
    print("Uçuş emri gönderildi, bekleniyor...")
    rclpy.spin_until_future_complete(GroundStationNode, future)
    
    response = future.result()
    print(f"SERVİS SONUCU: {response.success}, Mesaj: {response.status_message}")
    
    # 2. GÖREV: TARAMA (Action) - Sadece servis başarılıysa
    if response.success:
        print("Uçuş sıraya alındı. Tarama emri gönderiliyor...")
        GroundStationNode.send_scan_command(360)

    # Action bitene kadar bekle
    rclpy.spin(GroundStationNode)
    rclpy.shutdown()

if __name__ == "__main__":
    main()