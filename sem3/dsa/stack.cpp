#include <iostream>
using namespace std;

class Stack {
private:
    int stack[100];
    int top;
    int size;

public:

    Stack(int size1) {
        size = size1;
        top = -1;
    }


    void push() {
        if (top == size - 1) {
            cout << "Stack overflow!" << endl;
        } else {
            int a;
            cout << "Enter an element to push: ";
            cin >> a;
            stack[++top] = a;
            cout << a << " pushed onto the stack." << endl;
        }
    }


    void pop() {
        if (top == -1) {
            cout << "Stack underflow!" << endl;
        } else {
            cout << stack[top--] << " popped from the stack." << endl;
        }
    }


    void peek() {
        if (top == -1) {
            cout << "Stack is empty! Nothing to peek." << endl;
        } else {
            cout << "Top element is: " << stack[top] << endl;
        }
    }


    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};


void again(Stack &myStack) {
    while (true) {
        int choice;
        cout << "\nChoices:\n 1. Push,\n 2. Pop,\n 3. Peek,\n 4. Display,\n 5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myStack.push();
                break
            case 2:
                myStack.pop();
                break;
            case 3:
                myStack.peek();
                break;
            case 4:
                myStack.display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return;
            default:
                cout << "Invalid choice. Please enter a valid number." << endl;
        }
    }
}

int main() {
    int value;
    cout << "Enter the max size of the stack: ";
    cin >> value;
    Stack stack1(value);
    again(stack1);
    return 0;
}

