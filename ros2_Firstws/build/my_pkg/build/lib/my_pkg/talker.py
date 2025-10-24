import rclpy
from rclpy.node import Node 
from example_interfaces.msg import String


class my_publisher(Node):
    def __init__(self,node_name):
        super().__init__(node_name = node_name)
        self.my_publisher = self.create_publisher(String,"myTopicOne",10)
        self.timer = self.create_timer(0.5,self.publisher)
        self.counter = 0
        self.get_logger().info("The talker node was started")
    def publisher(self):
        msg = String()
        msg.data = f"Merhaba Talker {self.counter}"
        self.my_publisher.publish(msg)
        self.get_logger().info(msg.data)
        self.counter+=1


def main():
    rclpy.init()
    node = my_publisher("MyTalker")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()