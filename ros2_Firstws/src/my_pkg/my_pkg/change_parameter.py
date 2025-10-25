import rclpy
from rclpy.node import Node



class miniChangeParameterNode(Node):
    def __init__(self,name):
        super().__init__(node_name=name)

        self.declare_parameter("my_parameter","world")

        self.timer = self.create_timer(1,self.timeCall_back)
    def timeCall_back(self):
        my_param = self.get_parameter('my_parameter').get_parameter_value().string_value

        self.get_logger().info('Hello %s!' % my_param)

        my_new_param = rclpy.parameter.Parameter(
            'my_parameter',
            rclpy.Parameter.Type.STRING,
            'world'
        )
        all_new_parameters = [my_new_param]
        self.set_parameters(all_new_parameters)



def main():
    rclpy.init()
    node = miniChangeParameterNode("paramNode")
    rclpy.spin(node)

if __name__ == '__main__':
    main()