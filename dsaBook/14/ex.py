'''
1. Add a method to the classic LinkedList class that prints all the elements of
the list.
'''
class Node:
    def __init__(self, data, front = None):
        self.data = data
        self.next_node = front
    def __str__(self):
        return f"Node{self.data}"

class linkedlist:
    def __init__(self, head):
        self.head = head
    def __str__(self):
        return f"{self.head}"
node4 = Node(4)
node3 = Node(3, node4)
node2 = Node(2, node3)
node1 = Node(1, node2)

head = linkedlist(node1)
print("Printing all elements of list")

current_node = head.head
    
while current_node is not None:
    print(current_node)
    current_node = current_node.next_node



'''
2. Add a method to the DoublyLinkedList class that prints all the elements of
the list in reverse order.
'''
class Node:
    def __init__(self, data, front=None, back=None):
        self.data = data
        self.back_node = back
        self.front_node = front
    def __str__(self):
        return f"Node{self.data}"
        
class Double:
    def __init__(self, node):
        self.tail = node

node5 = Node(5)
node4 = Node(4, node5)
node3 = Node(3, node4)
node2 = Node(2, node3)
node1 = Node(1, node2)

node5.back_node = node4
node4.back_node = node3
node3.back_node = node2
node2.back_node = node1

tail = Double(node5)
current_node2 = tail.tail
print("All elements of double linked list in reverse order: ")
while current_node2 is not None:
    print(f"{current_node2}")
    current_node2 = current_node2.back_node



'''
5. Here’s a brilliant little linked list puzzle for you. Let’s say you have access
to a node from somewhere in the middle of a classic linked list, but not
the linked list itself. That is, you have a variable that points to an instance
of Node, but you don’t have access to the LinkedList instance. In this situation,
if you follow this node’s link, you can find all the items from this middle
node until the end, but you have no way to find the nodes that precede
this node in the list.
Write code that will effectively delete this node from the list. The entire
remaining list should remain complete, with only this node removed.
'''
# Here what we do is: we find node4 from node3.front_node, then we overwrite the data of node3 with node4's data and we change node3's front_node to node4's front node, effectively
# removing node3 by overwriting.
pointer = node3
node4 = node3.front_node
node3.data = node4.data
node3.front_node = node4.front_node
node4 = node3
