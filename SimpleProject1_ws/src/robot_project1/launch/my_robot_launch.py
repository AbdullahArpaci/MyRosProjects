from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_project1',
            namespace='robot_controller',
            executable='my_robot'
        ),
        Node(
            package='robot_project1',
            namespace='obstacle_server',
            executable='obstacleServer'
        )
    ])