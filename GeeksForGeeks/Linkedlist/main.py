class Node:
    def __init__(self, data = None) -> None:
        self.data = data
        self.next = None
        
        
class LinkedList:
    def __init__(self):
        self.head = None
        
    def instetAtHead(self, data):
        newNode = Node(data)
        if self.head is None:
            self.head = newNode
            return
        else:
            newNode.next = self.head
            self.head = newNode
        
    
    def printData(self):
        if self.head is None:
            print("Its and empty linked list")
            return
        
        itr = self.head
        while itr != None:
            print(itr.data, ' ', itr.next)
            itr = itr.next
    
    
    
if __name__ == '__main__':
    ll = LinkedList()
    ll.instetAtHead(6)
    ll.instetAtHead(7)
    ll.instetAtHead(8)
    ll.printData()