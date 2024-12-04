class Node:
	def __init__(self, data, nextNode=None):
		self.data = data
		self.nextNode = nextNode
	def __str__(self):
		return f"Node{self.data}"

node4 = Node(4)
node3 = Node(3, node4)
node2 = Node(2, node3)
node1 = Node(1, node2)

print(f"Node2 from Node 1: {node1.nextNode	}")
print(node4)
print(node3)
print(node2)
print(node1)

#In the above code we just created few nodes and linked them together.
#Now lets create class of LinkedList itself so that it directly points to the head of our list(meaning the first node).

class Linkedlist:
	def __init__(self, node):
		self.head = node
	def __str__(self):
		return f"Head of list: {self.head}"

first = Linkedlist(node1)
print(f"first: {list}")




#READING
# Reading from a linked list requires O(N) steps even if we provide the index. That's one drawback of linkedlist over array, because when provided index, array can look
# up elements in just 1 steps, thus having time complexity as O(1).

def read(index):
    current_index = 0 #Kind of counter, we start from index 0 and keep incrementing it until we reach the provided index.
    current_node = node1 #We have to start from the first node and traverse the whole linked list through it.
    while current_index < index: 
        current_node = current_node.nextNode  #Move to the next node
        current_index += 1
        #if current_node.nextNode.nextNode == None:        
        if current_node.nextNode is None:
            print(f"The current_node.nextNode is: {current_node.nextNode}")
            return f"The index {index} is out of bound"
    return f"At index {index}: {current_node.data}"
    
print(read(3))




#SEARCHING
# Searching means looking through the values of list and returning its index if the required value is found in list.
# Similar to Reading, searching in linked list also has the time complexity of O(N) since, we need to inspect every node. Seraching in array also has the same time complexity, as we
# need to inspect value of each index.

def search(value):
    current_node = node1
    current_index = 1 # starting from 1 for clarity because our first node has value of 1,
    
    while current_node is not None: #We check like this because we also want to check the last node. After traversing last node our current_node's value would be None, because
        # last node's nextNode is none.
        if current_node.data == value:
            return f"Index of node with value {value} is: {current_index}"
        current_node = current_node.nextNode 
        current_index += 1
    
    return f"Value {value} is not found"

print(search(4))
