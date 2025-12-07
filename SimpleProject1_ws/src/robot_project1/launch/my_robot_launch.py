from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess,DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    trigger_arg = DeclareLaunchArgument(
        name="trigger_ns",
        default_value="False",
        description="Eğer True ise, başlar başlamaz engeli tetikle."
    ) #launca böyle bir parametre olduğunu söylüyoruz

    trigger_config = LaunchConfiguration('trigger_ns') #Terminalden verilen değer atanıyor
    robot_controller_node = Node(
            package='robot_project1',
            namespace='robot_controller',
            executable='my_robot')
    ObstacleSensor = Node(
            package='robot_project1',
            namespace='obstacle_server',
            executable='obstacleServer'
        )

    trigger_service_call = ExecuteProcess(
        condition = IfCondition(trigger_config), #Eğer condition değeri True ise bu kodu çalıştır
        cmd=['ros2', 'service', 'call', '/trigger_obstacle', 'std_srvs/srv/SetBool', '"{data: true}"'],
        shell = True
    )
    return LaunchDescription([
        trigger_arg, #Yaptığımız değişkenleri tanımlıyoruz
        robot_controller_node,
        ObstacleSensor,
        trigger_service_call
    ])