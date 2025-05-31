class TrieNode:
    def __init__(self, data):
        self.data = data
        self.child_nodes = {}  # Dictionary to store child nodes

    def __str__(self):
        return f"Node({self.data})"

    def get_child(self):
        return self.child_nodes

    def set_child(self, child_node):
        # Adding key-value pair to child_nodes dictionary
        self.child_nodes[child_node.data] = child_node


class Trie:
    def __init__(self, root):
        self.root = root # Root node of the Trie

    def __str__(self):
        return f"Trie with root: {self.root}"

    def search(self, string):
        current_node = self.root  # Start from the root node
        for char in string:
            print("the current node")
            if char in current_node.child_nodes:  # Check if the child exists
                current_node = current_node.child_nodes[char]  # Move to the child node
            else:
                return None  # Return None if the character is not found
        return current_node  # Return the last node if the search is successful



a = TrieNode('a')
b = TrieNode('b')
c = TrieNode('c')

a.set_child(b)
b.set_child(c)

trie = Trie(a)

print(trie)
print(trie.root)
print(a.child_nodes)
result = trie.search('bc')
print(result)

#result = trie.search('abc')
#print(result)

#result = trie.search('ac')
#print(result)
