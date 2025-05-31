class TrieNode:
    def __init__(self, data):
        self.data = data
        self.child_nodes = {}
    def __str__(self):
        return f"TrieNode '{self.data}' "
    def get_child(self):
        return self.child_nodes
    def set_child(self, x):
        self.child_nodes.setdefault(str(x), x) #Adding key value in dictionary using setdefault()


class Trie:
    def __init__(self, root):
        self.root = root
    def __str__(self):
        return f"The root is: {self.root}"
    def get_root(self):
        return self.root
        

b = TrieNode('b')
a = TrieNode('a')
c = TrieNode('c')

trie = Trie(a)


print(a)
print(a.get_child())
a.set_child(b)
a.set_child(c)
print(a.get_child())

trie = Trie(a)
print(trie)
print(trie.get_root())
