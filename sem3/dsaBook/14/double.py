class Node:
    def __init__(self, data, front=None, back=None):
        self.data = data
        self.back_node = back
        self.front_node = front
    def __str__(self):
        return f"Node{self.data}"

node5 = Node(5)
node4 = Node(4, node5)
node3 = Node(3, node4)
node2 = Node(2, node3)
node1 = Node(1, node2)

node5.back_node = node4
node4.back_node = node3
node3.back_node = node2
node2.back_node = node1

print(f"Node5 back: {node5.back_node}")
print(f"Node4 front: {node4.front_node}")




