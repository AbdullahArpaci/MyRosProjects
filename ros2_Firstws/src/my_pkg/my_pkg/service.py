import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts



class MyService(Node):
    def __init__(self,name):
        super().__init__(node_name=name)
        self.service = self.create_service(AddTwoInts,"myServiceOne",self.Service)

    def Service(self,request,response):
        response.sum = request.a + request.b
        self.get_logger().info(f"The sum is:{response.sum}")
        return response
    


def main():
    rclpy.init()
    node = MyService("MyService")
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()