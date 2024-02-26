class Biplob:
    def __init__(self, value) -> None:
        self.value = value
        self.next = None
        
class LinkedList:
    def __init__(self) -> None:
        self.head = None
    
    def insertAtHead(self, data):
        newNode = Biplob(data)
        
        if self.head is None:
            self.head = newNode
            return
        else:
            newNode.next = self.head
            self.head = newNode
            
    def printData(self):
        self.a = self.head
        while(self.a != None):
            print(self.a.value)
            self.a = self.a.next
    
    
if __name__ == "__main__":
    ll = LinkedList()
    
    ll.insertAtHead(4)
    ll.insertAtHead(5)
    ll.insertAtHead(7)
    ll.insertAtHead(7)
    
    # print(ll.head.value)
    ll.printData()
            
        
    
        
    
    