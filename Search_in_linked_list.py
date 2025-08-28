class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def insert_end(self,val):
        newnode=Node(val)
        if not self.head:self.head=newnode;return
        temp=self.head
        while temp.next:temp=temp.next
        temp.next=newnode

    def search(self,val):
        temp=self.head
        pos=0
        while temp:
            if temp.data==val:return pos
            temp=temp.next;pos+=1
        return -1

ll=LinkedList()
ll.insert_end(10); ll.insert_end(20); ll.insert_end(30)
print(ll.search(20))
print(ll.search(40))
