class Treenode:
    def __init__(self, val, left=None, right=None):
        self.value = val
        self.left_child = left
        self.right_child = right
    
    def __str__(self):
        return f"Node{self.value}"
    
    def view_child(self):
        return f"Left child: {self.left_child}, {self}, Right child: {self.right_child}"
t1 = Treenode(30)
t2 = Treenode(20)
root = Treenode(25, t2, t1)

print(root)
print(root.view_child())
