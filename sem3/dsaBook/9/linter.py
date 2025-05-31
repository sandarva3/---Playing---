#This is a simple linter program which checks the opening and closing of brackets in a given text using stack.

class Stack:
    def __init__(self):
        self.data = []
    def push(self, value):
        self.data.append(value)
    def pop(self):
        if self.data:
            return self.data.pop()
        else:
            return None
    def read(self):
        if self.data:
            return self.data[-1]
        else:
            return None
    def __str__(self):
        return f"{self.data}"

class Linter:
    def __init__(self):
        self.stack = Stack()
    def check(self, text):
        for char in text:
            if(self.is_opening_bracket(char)):
                self.stack.push(char)
            elif(self.is_closing_bracket(char)):
                opening = self.stack.pop()
                if not opening:
                    return f"'{char}' is missing opening bracket."
                if self.check_bracket(char, opening) == False:
                    return f"Error. '{char}' not matching opening bracket'{opening}'"
        if self.stack.read():
            return f"{self.stack.read()} does not have closing bracket."
        else:
            print("GOOD, everything's alright.")
    
    def is_opening_bracket(self, char):
        return True if char == '(' or char == '{' or char == '[' else False
    def is_closing_bracket(self, char):
        return True if char == ')' or char == '}' or char == ']' else False
    def check_bracket(self, closing, opening):
        brackets = {
        '}': '{',
        ')': '(',
        ']': '['
        }
        correct_opening = brackets.get(closing)
        if opening != correct_opening:
            return False
        else:
            return True

l1 = Linter()
text = "({var a = 3})"
print(l1.check(text))

