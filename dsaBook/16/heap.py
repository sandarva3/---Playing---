class Heap:
    def __init__(self):
        self.data =[]
    def root_node(self):
        return self.data[0]
    def last_node(self):
        return self.data[-1]
    def __str__(self):
        return f"{data}"
    def left_child(self, index):
        return (index*2)+1 #This formula returns the index of left child accurately.
    def right_child(self, index):
        return (index*2)+2
    def parent_index(self, index):
        return int((index-1)/2)
    def insert(self, value):
        data.append(value)
        #of course the index of newly entered node will be the last.
        new_node_index = len(data) -1
        #We get the parent index from our own method above.
        parent_index = self.parent_index(new_node_index)
        #First condition is to ensure that inserted node is not root node, as root node won't have any parent and we don't need to run this loop.
        #Second condition is to check the node's parent value and swap it with parent, if it's greater than parent.
        while new_node_index > 0 and data[new_node_index] > data[parent_index]:
            data[new_node_index], data[parent_index] = data[parent_index], data[new_node_index]
            # Since we swapped with parent, we also need to know that parent's index and keep it as our new index. This is to do trickle up process, so that now with this new index
            # we can compare to the parent above this one.
            new_node_index = self.parent_index(new_node_index)
    
    #Since we'll be only deleting a root node.
    def delete(self):
    #First we make the last node as our root node.
        data[0] = data.pop()
        #We then keep track of the new node which overwrote the root node.
        trickle_node_index = 0
        #check if big child exists or not
        while has_big_child(trickle_node_index):
            big_child_index = get_big_child_index(trickle_node_index)
            #Swap
            data[big_child_index], data[trickle_node_index] = data[trickle_node_index], data[big_child_index]
            #We update the trickle node index as it was swapped with big node index, to do trickle down if more big node exists below
            trickle_node_index = big_child_index
    
    def get_big_child_index(index):
        if not data[self.left_child(index)]:
            return self.right_child(index)
        elif data[self.left_child(index)] > data[self.right_child(index)]:
            return self.left_child(index)
        else:
            return self.right_child(index)
        
    def has_big_child(self, index):
        #It will return true if any of the condition matches and data exists.
        (self.left_child(index) and data[self.left_child_index(index)] > data[index]) || (self.right_child(index) and data[self.right_child_index(index)] > data[index])

