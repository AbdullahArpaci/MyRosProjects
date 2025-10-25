import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from my_pkg_interfaces.srv import AddThreeInts

class MyClient(Node):
    def __init__(self,name):
        super().__init__(node_name=name)
        self.client = self.create_client(AddTwoInts,"myServiceOne")
        self.client2 = self.create_client(AddThreeInts,"myServiceTwo")

        while not self.client.wait_for_service(timeout_sec=1.0): #Servisin aktif olup olmadığı kontrol edilir
            self.get_logger().info('service not available, waiting again...')
        while not self.client2.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = AddTwoInts.Request() #Servise gönderilercek mesajın boş bir kalıbı oluşturulur
        self.req2 = AddThreeInts.Request()

    def sendRequestAddTwoInts(self,a,b):
        self.req.a = a 
        self.req.b = b
        return self.client.call_async(self.req)
    
    def sendRequestAddThreeInts(self,a,b,c):
        self.req2.a = a
        self.req2.b = b
        self.req2.c = c
        return self.client2.call_async(self.req2)

def main():
    rclpy.init()
    node = MyClient("MyClient")
    while(True):
        a = int(input("First Number:"))
        b = int(input("Second Number:"))
        future = node.sendRequestAddTwoInts(a,b)
        rclpy.spin_until_future_complete(node, future) #Kod burada kilitlenir ve servisden mesaj gelmesi beklenir servisden mesaj gelene kadar bu süreç devam eder
        response = future.result() #Bu SATIR çalıştığına göre artık içinde bir sonuç ifadesi olduğunu biliyoruz
        print("The AddTwoInts service result is:",response.sum)
        
        c = int(input("Third Number:"))
        future = node.sendRequestAddThreeInts(a,b,c)
        rclpy.spin_until_future_complete(node, future) #Kod burada kilitlenir ve servisden mesaj gelmesi beklenir servisden mesaj gelene kadar bu süreç devam eder
        response = future.result() #Bu SATIR çalıştığına göre artık içinde bir sonuç ifadesi olduğunu biliyoruz
        print("The AddThreeInts service result is:",response.sum)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()


