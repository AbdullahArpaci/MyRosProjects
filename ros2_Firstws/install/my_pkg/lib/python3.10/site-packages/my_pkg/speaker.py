import rclpy
from rclpy.node import Node
from example_interfaces.msg import String




class my_subscriber(Node):
    def __init__(self,name):
        super().__init__(node_name = name)
        self.subscriber = self.create_subscription(String,"myTopicOne",self.my_subscriber,10)


    def my_subscriber(self,msg):
        self.get_logger().info(f"The message is: {msg.data}")





def main():
    rclpy.init()
    node = my_subscriber("MySubscriber")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()