import rclpy
from rclpy.node import Node
from drone_interfaces.msg import DroneTelemetry
from drone_interfaces.srv import MissionDispatch
import sys

class GroundStation(Node):
    def __init__(self):
        super().__init__("GroundStation")

        self.subscriber = self.create_subscription(
            DroneTelemetry, 
            "/ground_station", 
            self.subscriber_callback, 
            10
        )

        self.drone_data = {} 
        
        self.timer = self.create_timer(1.0, self.show_drones_info)

        self.client = self.create_client(MissionDispatch, "/mission")
        while not self.client.wait_for_service(1.0):
            self.get_logger().info("Servis bekleniyor...")
            
        self.request = MissionDispatch.Request()

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

        print("-" * 30)
        for drone_id, info in self.drone_data.items():
            print(f"Drone ID: {drone_id}")
            print(f"  Batarya: %{info['battery_level']:.1f}")
            print(f"  Mod: {info['flight_mode']}")
 
            pos_list = [round(p, 2) for p in info['position']]
            print(f"  Konum: {pos_list}")
        print("-" * 30)

    def send_command(self, target_id, mission_type, position):

        self.request.target_drone_id = target_id 
        self.request.mission_type = mission_type
        self.request.target_loc = position
        

        return self.client.call_async(self.request)


def main():
    rclpy.init()
    GroundStationNode = GroundStation()
    target_loc = [20.0, 10.0, 10.0] 
    future = GroundStationNode.send_command(1, "Waypoint Atama", target_loc)
    

    rclpy.spin_until_future_complete(GroundStationNode, future)
    
    try:
        response = future.result()
        print(f"GÖREV SONUCU: {response.success}")
        print(f"MESAJ: {response.status_message}")
    except Exception as e:
        print(f"Servis hatasi: {e}")

    rclpy.spin(GroundStationNode)
    rclpy.shutdown()

if "__main__" == __name__:
    main()