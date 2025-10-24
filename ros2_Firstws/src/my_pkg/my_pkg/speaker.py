import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
from my_pkg_interfaces.msg import Num
from my_pkg_interfaces.msg import Sphere



class my_subscriber(Node):
    def __init__(self,name):
        super().__init__(node_name = name)
        self.subscriber = self.create_subscription(String,"myTopicOne",self.my_subscriberString,10)
        self.subscriber2 = self.create_subscription(Num,"myTopicTwo",self.my_subscriberNum,10)
        self.subscriber3 = self.create_subscription(Sphere,"myTopicThree",self.my_subscriberSphere,10)

    def my_subscriberString(self,msg):
        self.get_logger().info(f"The message is: {msg.data}")
    def my_subscriberNum(self,msg):
        self.get_logger().info(f"The message is: {msg.num}")
    def my_subscriberSphere(self,msg):
        self.get_logger().info(f"The message is: {msg.radius}")





def main():
    rclpy.init()
    node = my_subscriber("MySubscriber")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()