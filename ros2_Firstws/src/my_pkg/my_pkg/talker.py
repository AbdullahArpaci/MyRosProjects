import rclpy
from rclpy.node import Node 
from example_interfaces.msg import String
from my_pkg_interfaces.msg import Num
from my_pkg_interfaces.msg import Sphere

class my_publisher(Node):
    def __init__(self,node_name):
        super().__init__(node_name = node_name)
        self.my_publisher = self.create_publisher(String,"myTopicOne",10)
        self.my_publisher2 = self.create_publisher(Num,"myTopicTwo",10)
        self.my_publisher3 = self.create_publisher(Sphere,"myTopicThree",10)
        self.timer = self.create_timer(0.5,self.publish_all_topics)
        self.counter = 0
        self.get_logger().info("The talker node was started")

    def publish_all_topics(self):
        msg_str = String()
        msg_str.data = f"Merhaba Talker {self.counter}"
        self.my_publisher.publish(msg_str)
        
     
        msg_num = Num()
        msg_num.num = self.counter
        self.my_publisher2.publish(msg_num)
        

        msg_sphere = Sphere()
        msg_sphere.radius = float(self.counter) * 0.1
        self.my_publisher3.publish(msg_sphere)

        self.get_logger().info(f"Yayınlandı (String): {msg_str.data} | (Num): {msg_num.num} | (Sphere): {msg_sphere.radius:.1f}")
        
        self.counter += 1


def main():
    rclpy.init()
    node = my_publisher("MyTalker")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()