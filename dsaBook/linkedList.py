class Node:
	def __init__(self, data, nextNode=None):
		self.data = data
		self.nextNode = nextNode

	def __str__(self):
		return f"Node with data: {self.data}"



node4 = Node(4)
node3 = Node(3, node4)
node2 = Node(2, node3)
node1 = Node(1, node2)


print(f"Node2 from Node 1: {node1.nextNode	}")

print(node4)
print(node3)
print(node2)
print(node1)

