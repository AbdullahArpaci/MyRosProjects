import rclpy
from rclpy.node import Node
from drone_interfaces.msg import DroneTelemetry
from drone_interfaces.srv import MissionDispatch
import threading
import time
import array

class Drone(Node):
    def __init__(self,drone_id,battery_level,positions):
        super().__init__(node_name = f"Drone{drone_id}")


        self.declare_parameter('battery_threshold', 20.0)


        self.battery_level = float(battery_level)
        self.position = array.array("f",positions)
        self.dron_id = drone_id
        self.flight_mode = "Yerde"
        self.msg = DroneTelemetry()
        self.publisher = self.create_publisher(DroneTelemetry,"/ground_station",10)
        self.timer = self.create_timer(1.0,self.publish_messages)
        self.service = self.create_service(MissionDispatch,"/mission",self.service_callback)

    def publish_messages(self):
        self.update_battery()
        
        self.msg.drone_id = self.dron_id
        self.msg.flight_mode = self.flight_mode
        self.msg.battery_level = self.battery_level
        self.msg.position = self.position
        
        self.publisher.publish(self.msg)

    def service_callback(self,request,response):
        if request.target_drone_id == self.dron_id:
            self.battery_threshold = self.get_parameter('battery_threshold').get_parameter_value().double_value
            self.get_logger().info(f"Pil eşiği: %{self.battery_threshold:.1f}. (%{self.battery_threshold} altı görev reddi)")


            if self.battery_level < self.battery_threshold:
                response.success = False
                response.status_message = "Low Battery! Mission rejected."
                self.get_logger().warn("Düşük pil nedeniyle görev reddedildi.")
            else:

                mission_thread = threading.Thread(
                    target=self.starting_mission, 
                    args=(request.mission_type, request.target_loc)
                )
                mission_thread.start()
                
                response.success = True
                response.status_message = "Mission Accepted. Taking off..."
        else:
            response.success = False
            response.status_message = "Wrong Drone ID"
            
        return response
    
    def update_battery(self):
        if self.battery_level > 0:
            self.battery_level -= 0.1

    
    def starting_mission(self, mission_type, target_pos):
     
        self.get_logger().info(f"GÖREV BAŞLIYOR: {mission_type}")
        
        time.sleep(1)
        self.flight_mode = "ARMED"
        self.get_logger().info("Durum: ARMED")
        time.sleep(1)

        self.flight_mode = "TAKE_OFF"
        self.get_logger().info("Durum: TAKE OFF")
        
  
        target_z = int(target_pos[2])
        current_z = int(self.position[2])

        while self.position[2] < target_z:
            self.position[2] += 0.5 # Float artış
            time.sleep(0.5)
            self.get_logger().info(f"Yükseliyor... Z: {self.position[2]}")

        self.flight_mode = "FLYING"
        self.get_logger().info("Hedef yüksekliğe ulaşildi. Koordinata gidiliyor...")
        
        time.sleep(10)
        self.position[0] = target_pos[0]
        self.position[1] = target_pos[1]
        
        self.get_logger().info(f"Konuma Varildi: {self.position}")
        
        self.flight_mode = "LANDING"
        self.get_logger().info("İniş yapiliyor...")
        time.sleep(target_z*0.5)
        self.position[2] = 0.0
        
        self.flight_mode = "DISARMED"
        self.get_logger().info("Görev Tamamlandi.")

def main():
    rclpy.init()
    MyDrone = Drone(1, 25, [0.0, 0.0, 0.0])
    rclpy.spin(MyDrone)
    rclpy.shutdown()

if __name__ == "__main__":
    main()