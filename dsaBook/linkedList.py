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

list = Linkedlist(node1)

print(list)
