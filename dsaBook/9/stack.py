
# Stack is just a way to store and view data in a stack way, the LIFO way. We can implement stack using any data structure under the hood, like linked list or any other.
# Here's an implementation with array.
class Stack:
    def __init__(self):
        self.data = []
    def push(self, value):
        self.data.append(value)
        print(f"Pushed: {value}")
    def pop(self):
        print(f"Popped: {self.data.pop()}")
    def read(self):
        print(f"Top: {self.data[-1]}")
    def __str__(self):
        return f"{self.data}"
        

'''
s1 = Stack()
s1.push(5)
s1.push(10)
s1.push(15)
s1.read()
s1.pop()
s1.read()
print(s1)

'''
