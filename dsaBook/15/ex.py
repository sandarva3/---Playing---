#2
'''   2. If a well-balanced binary search tree contains 1,000 values, what is the
maximum number of steps it would take to search for a value within it? 
=> The depth of balanced Binary tree would be log2(N), and to traverse a balanced binary searched tree would take log2(N) steps.
so log2(1000) = 10, it'd take 10 steps.  '''


#3
'''   3. Write an algorithm that finds the greatest value within a binary search tree.   '''
def highest(node):
    if node.right_child is None:
        return node.value
    else:
        highest(node.right_child)

#Doing the same thing using loop:
def highest2(node):
    while True:
        if node.right_child is None:
            return node.value
        else:
            node = node.right_child



