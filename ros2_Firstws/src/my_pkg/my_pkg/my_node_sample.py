import rclpy 
from rclpy.node import Node


class MyNodeSample(Node):
    def __init__(self,node_name):
        super().__init__(node_name=node_name)
        self.get_logger().info("My node was started")


def main():
    rclpy.init()
    node = MyNodeSample("MyNode")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()