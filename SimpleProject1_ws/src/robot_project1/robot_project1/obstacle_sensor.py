import rclpy
from rclpy.node import Node
from robot_interfaces1.msg import ObstacleInfo
from std_srvs.srv import SetBool

class ObstacleSensor(Node):
    def __init__(self,name):
        super().__init__(node_name=name)
        self.publisher = self.create_publisher(ObstacleInfo,"/obstacle_info",10)
        self.service = self.create_service(SetBool,"/trigger_obstacle",self.trigger_callback) 
    def publishMessage(self,Type):
        self.msg = ObstacleInfo()
        self.msg.found = Type
        if Type:
            distance = 0.0
        else:
            distance = 0.5
        self.msg.distance = distance
        self.publisher.publish(self.msg)
    def trigger_callback(self,request,response):
        if(request.data == True):
            self.publishMessage(request.data)
            response.success = True
            response.message = "Engel algilama başarili"
        else:
            self.publishMessage(request.data)
            response.success = False
            response.message = "Engel algilanamadi"
        return response
    

def main():
    rclpy.init()
    service_node = ObstacleSensor("ObstacleSensorService")
    rclpy.spin(service_node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()