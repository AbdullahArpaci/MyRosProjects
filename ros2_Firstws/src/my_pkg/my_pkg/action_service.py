import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from my_pkg_interfaces.action import Fibonacci
import time


class myActionServer(Node):
    def __init__(self,name):
        super().__init__(node_name=name)
        self.action = ActionServer(
            self,
            Fibonacci,
            "Fibonacci",
            self.execute_callback
        )
    def execute_callback(self,goal):
        self.get_logger().info('Executing goal...')  
        feedback_msg = Fibonacci.Feedback()
        feedback_msg.partial_sequence = [0,1]
        for i in range(1, goal.request.order):
            feedback_msg.partial_sequence.append(
                feedback_msg.partial_sequence[i] + feedback_msg.partial_sequence[i-1])
            goal.publish_feedback(feedback_msg)
            self.get_logger().info('Feedback: {0}'.format(feedback_msg.partial_sequence))
            time.sleep(1)

        goal.succeed()
        result = Fibonacci.Result()
        result.sequence = feedback_msg.partial_sequence
        return result


def main(args=None):
    rclpy.init(args=args)

    fibonacci_action_server = myActionServer("FibonacciActionServer")

    rclpy.spin(fibonacci_action_server)


if __name__ == '__main__':
    main()
