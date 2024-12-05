class Node:
	def __init__(self, data, next_node=None):
		self.data = data
		self.next_node = next_node
	def __str__(self):
		return f"Node{self.data}"

node4 = Node(4)
node3 = Node(3, node4)
node2 = Node(2, node3)
node1 = Node(1, node2)

print(f"Node2 from Node 1: {node1.next_node	}")
print(node4)
print(node3)
print(node2)
print(node1)

#In the above code we just created few nodes and linked them together.
#Now lets create class of LinkedList itself so that it directly points to the head of our list(meaning the first node).

class Linkedlist:
	def __init__(self, node):
		self.head = node
#	def __str__(self):
#		return f"Head of list: {self.head}"

list = Linkedlist(node1)
head = list.head
print(f"The head is: {head}")




#READING
# Reading from a linked list requires O(N) steps even if we provide the index. That's one drawback of linkedlist over array, because when provided index, array can look
# up elements in just 1 steps, thus having time complexity as O(1).

def read(index):
    current_index = 0 #Kind of counter, we start from index 0 and keep incrementing it until we reach the provided index.
    current_node = node1 #We have to start from the first node and traverse the whole linked list through it.
    while current_index < index: 
        current_node = current_node.next_node  #Move to the next node
        current_index += 1
        #if current_node.next_node.next_node == None:        
        if current_node.next_node is None:
            print(f"The current_node.next_node is: {current_node.next_node}")
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
        # last node's next_node is none.
        if current_node.data == value:
            return f"Index of node with value {value} is: {current_index}"
        current_node = current_node.next_node 
        current_index += 1
    
    return f"Value {value} is not found"

print(search(4))




# INSERTION
# Inserting a new node to beginning of linkedlist will take 1 step, just point the new node to first node(node1). Inserting into an array would take N+1 steps, since every element needs to 
# be moved to the right.
# Inserting a new node to the end of linkedlist will take N+1 steps, since it needs to traverse through N nodes to find the end and add a new node at last.

def insert(index, value):
    new_node = Node(value)
    if index == 0:
        new_node.next_node = node1
        head = new_node
        return f"Created a node at index {index} with value {value}. The next node is: {new_node.next_node}"
    else:
        current_index = 0
        current_node = node1
        while current_index < index - 1:
            current_node = current_node.next_node
            current_index += 1
        new_node.next_node = current_node.next_node
        current_node.next_node = new_node
        return f"Created a node at index {index} with value {value}. The next node is: {new_node.next_node}"

print(insert(0, 1))




# DELETION
# Deleting a node from a list takes 1 step if it's the first node, just point the 'head' to second node. In array it'd take N+1 steps, since delete and move evey element to left.
# Deleting from anywhere will take N+1 steps, because we need to traverse all nodes till that index. So, deleting from last will also take N+1 steps.
# In array, deleting from last would take 1 step.
# In linkedlist deleting a node means effectively breaking a link/chain to that node, and let previous node point to another node instead. It'd still exist somewhere in memory.

def delete(index):
    global head
    if index == 0:
        head = node1.next_node
        return f"Head is shifted to: {head}"
    else:
        current_node = head
        current_index = 0
        while current_index < index -1:
            current_node = current_node.next_node
            current_index += 1
        print(f"Currently, the node at given index is: {current_node.next_node}")
        current_node.next_node = current_node.next_node.next_node
        return f"Node at index {index} is deleted. The new node at that index is: {current_node.next_node}"

print(delete(2))

