import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from robot_interfaces1.msg import ObstacleInfo

class robot_controller(Node):
    def __init__(self,name):
        super().__init__(node_name=name)
        self.publisher = self.create_publisher(Twist,"cmd_vel",10)
        self.subscriber = self.create_subscription(ObstacleInfo,"obstacle_info",self.obstacle_call_back,10)
        self.timer = self.create_timer(0.1,self.move_robot)
        self.obstacle_found = False
    def move_robot(self):
        msg = Twist()
        if self.obstacle_found == False:
            msg.linear.x = 0.5
            self.get_logger().info("Robot ileri hareket ediyor")
        else:
            self.get_logger().warn("Engel algilandi")
            msg.linear.x = 0.0
            print("Robot Durdu")
        self.publisher.publish(msg)
    
    def obstacle_call_back(self,msg):
        self.get_logger().warn(f"{msg.distance} ileride engel algilandi")
        self.obstacle_found = msg.found


def main():
    rclpy.init()
    my_robot_node = robot_controller("Robot1")
    rclpy.spin(my_robot_node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()