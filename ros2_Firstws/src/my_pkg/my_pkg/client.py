import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class MyClient(Node):
    def __init__(self,name):
        super().__init__(node_name=name)
        self.client = self.create_client(AddTwoInts,"myServiceOne")
        while not self.client.wait_for_service(timeout_sec=1.0): #Servisin aktif olup olmadığı kontrol edilir
            self.get_logger().info('service not available, waiting again...')
        self.req = AddTwoInts.Request() #Servise gönderilercek mesajın boş bir kalıbı oluşturulur

    def sendRequest(self,a,b):
        self.req.a = a 
        self.req.b = b
        return self.client.call_async(self.req)


def main():
    rclpy.init()
    node = MyClient("MyClient")
    while(True):
        a = int(input("First Number:"))
        b = int(input("Second Number:"))
        future = node.sendRequest(a,b)
        rclpy.spin_until_future_complete(node, future) #Kod burada kilitlenir ve servisden mesaj gelmesi beklenir servisden mesaj gelene kadar bu süreç devam eder
        response = future.result() #Bu SATIR çalıştığına göre artık içinde bir sonuç ifadesi olduğunu biliyoruz
        print("The result is:",response)
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()


