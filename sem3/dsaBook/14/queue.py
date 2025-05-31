#Creating the node class, for looking into each element.
class Node:
    def __init__(self, data, front=None, back=None):
        self.data = data
        self.front_node = front
        self.back_node = back
    def __str__(self):
        return f"Node{self.data}"

#Double linkedlist, to set the front node and the last node of each element and connect them.
class DoubleLinkedlist:
    def __init__(self):
        self.first_node = None
        self.last_node = None
    
    def insert_end(self, value):
        new_node = Node(value) #Create a new node out of the provided value
        #if the first node doesn't already exist, meaning if the provided element is the first element, create the node and put it as the first and last node of the doubly linked list
        if not self.first_node:
            self.first_node = new_node
            self.last_node = new_node
        #Else if some nodes already exist in out linkedlist then, put the new node to the end of the list
        else:
            new_node.back_node = self.last_node
            self.last_node.front_node = new_node
            self.last_node = new_node
        print(f"Enqueued. Node inserted: {new_node}")
            
    def remove_front(self):
        removed_node = self.first_node
        #remove the first node in the list, and put the second node as the first node now.
        self.first_node = self.first_node.front_node
        print(f"Dequeued. Node removed: {removed_node}")

# Queue to insert the element and remove the element.
class Queue:
    def __init__(self):
        self.data = DoubleLinkedlist() #Using doubly linkedlist to build up our queue instead of array.
    def enqueue(self, element):
        self.data.insert_end(element)
    def dequeue(self):
        removed_node = self.data.remove_front()
    def read(self):
        current_node = self.data.first_node
        print("All the nodes in the queue: ")
        while current_node is not None:
            print(f"Node{current_node.data}, ")
            current_node = current_node.front_node

q = Queue()
q.enqueue(10)
q.enqueue(20)
q.enqueue(30)
q.read()
q.dequeue()
q.read()
