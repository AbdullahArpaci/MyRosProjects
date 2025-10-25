import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from my_pkg_interfaces.action import Fibonacci


class FibonacciClient(Node):
    def __init__(self):
        super().__init__('fibonacci_client')
        self._action_client = ActionClient(self, Fibonacci, 'Fibonacci')

    def send_goal(self, order: int):
        """Goal gönderimi"""
        goal_msg = Fibonacci.Goal()
        goal_msg.order = order

        self.get_logger().info(f"Sending goal: order={order}")

        # Sunucunun hazır olmasını bekle
        self._action_client.wait_for_server()

        # Asenkron şekilde goal gönder
        send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        """Goal kabul edildi mi kontrol et"""
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warn("Goal rejected :(")
            return

        self.get_logger().info("Goal accepted :)")

        # Sonucu bekle
        get_result_future = goal_handle.get_result_async()
        get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        """Sonuç geldiğinde çalışır"""
        result = future.result().result
        self.get_logger().info(f"Result: {result.sequence}")
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        """Feedback mesajı geldiğinde"""
        feedback = feedback_msg.feedback
        self.get_logger().info(f"Feedback: {feedback.partial_sequence}")


def main(args=None):
    rclpy.init(args=args)
    client = FibonacciClient()
    client.send_goal(10)
    rclpy.spin(client)
    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
