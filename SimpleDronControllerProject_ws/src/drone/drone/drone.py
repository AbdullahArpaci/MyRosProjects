import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from drone_interfaces.action import ScanSurroundings
from drone_interfaces.msg import DroneTelemetry
from drone_interfaces.srv import MissionDispatch

import threading
import time
import array
import random
import queue

class Drone(Node):
    def __init__(self, drone_id, battery_level, positions):
        super().__init__(node_name=f"Drone{drone_id}")
        
       
        self.callback_group = ReentrantCallbackGroup()
        
 
        self.mission_queue = queue.Queue()
        self.worker_thread = threading.Thread(target=self.process_queue, daemon=True)
        self.worker_thread.start()

      
        self.declare_parameter('battery_threshold', 20.0)

   
        self._action = ActionServer(
            self,
            ScanSurroundings,
            "/scanMission",
            self.execute_callback,
            callback_group=self.callback_group
        )

     
        self.battery_level = float(battery_level)
        self.position = array.array("f", positions)
        self.dron_id = drone_id
        self.flight_mode = "Yerde"
        self.msg = DroneTelemetry()


        self.publisher = self.create_publisher(DroneTelemetry, "/ground_station", 10)
        self.timer = self.create_timer(1.0, self.publish_messages, callback_group=self.callback_group)

        self.service = self.create_service(
            MissionDispatch, 
            "/mission", 
            self.service_callback, 
            callback_group=self.callback_group
        )

        self.get_logger().info("Drone Sistemi Hazır.Görevler Bekleniyor")


    def process_queue(self):
        while rclpy.ok():

            task_func, args = self.mission_queue.get()
            
            self.get_logger().info(f"Yeni görev kuyruktan alindi: {task_func.__name__}")
            
            task_func(*args)
            
            self.get_logger().info(f"iş tamamlandi: {task_func.__name__}")
            
            self.mission_queue.task_done()


    def publish_messages(self):
        self.update_battery()
        self.msg.drone_id = self.dron_id
        self.msg.flight_mode = self.flight_mode
        self.msg.battery_level = self.battery_level
        self.msg.position = self.position
        self.publisher.publish(self.msg)

  
    def service_callback(self, request, response):
        if request.target_drone_id == self.dron_id:
            current_thresh = self.get_parameter('battery_threshold').get_parameter_value().double_value
            
            if self.battery_level < current_thresh:
                response.success = False
                response.status_message = "Low Battery!"
            else:
          
                self.get_logger().info("Uçuş İsteği Kuyruğa Eklendi")
                self.mission_queue.put((self.perform_flight_mission, (request.mission_type, request.target_loc)))
                
                response.success = True
                response.status_message = "Mission Queued."
        else:
            response.success = False
            response.status_message = "Wrong Drone ID"
        return response

    def execute_callback(self, goal_handle):
        self.get_logger().info('Tarama İsteği Kuyruğa Eklendi')
        
        completion_event = threading.Event()
        result_container = {} 

        self.mission_queue.put((self.perform_scan_mission, (goal_handle, completion_event, result_container)))
        

        completion_event.wait()
        
        return result_container['result']

   
    
    def perform_flight_mission(self, mission_type, target_pos):
        self.get_logger().info(f"UÇUŞ GÖREVİ BAŞLADI: {mission_type}")
        time.sleep(1)
        self.flight_mode = "ARMED"
        self.get_logger().info("Durum: ARMED")
        time.sleep(1)

        self.flight_mode = "TAKE_OFF"
        self.get_logger().info("Durum: TAKE OFF")

        target_z = int(target_pos[2])
        
        while self.position[2] < target_z:
            self.position[2] += 0.5 
            time.sleep(0.5)
            self.get_logger().info(f"Yükseliyor... Z: {self.position[2]}")

        self.flight_mode = "FLYING"
        self.get_logger().info("Hedef yüksekliğe ulaşildi. Koordinata gidiliyor...")
        time.sleep(5)
        self.position[0] = target_pos[0]
        self.position[1] = target_pos[1]

        self.get_logger().info(f"Konuma Varildi: {self.position}")


    def perform_scan_mission(self, goal_handle, done_event, result_dict):
        self.get_logger().info("TARAMA GÖREVİ BAŞLADI...")
        
        feedback_msg = ScanSurroundings.Feedback()
        result = ScanSurroundings.Result()
        
        target = goal_handle.request.target_angle
        current_angle = 0.0
        
        while current_angle < target:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result.success = False
                result_dict['result'] = result
                done_event.set()
                return

            current_angle += 10.0
            time.sleep(0.5) 
            
            feedback_msg.current_angle = current_angle
            feedback_msg.percent_complete = int((current_angle / target) * 100)
            goal_handle.publish_feedback(feedback_msg)

        goal_handle.succeed()
        
        possible_objects = ["Ağaç", "Araba", "İnsan", "Köpek"]
        found_objects = random.sample(possible_objects, k=2)
        
        result.detected_objects = found_objects
        result.success = True
        

        self.flight_mode = "LANDING"
        time.sleep(2)
        self.position[2] = 0.0
        self.flight_mode = "DISARMED"
        
        result_dict['result'] = result
        done_event.set() 

    def update_battery(self):
        if self.battery_level > 0:
            self.battery_level -= 0.1

def main():
    rclpy.init()
    MyDrone = Drone(1, 40, [0.0, 0.0, 0.0])
    
    executor = MultiThreadedExecutor()
    executor.add_node(MyDrone)
    
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        MyDrone.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()