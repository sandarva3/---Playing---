#include <iostream>
using namespace std;


class Node{
public:
    int data;
    Node* prev;
    Node(int val){
        this->data = val;
    }
};
class Stack {
private:
    Node* top;
public:
    Stack(){
        top = nullptr;
    }

    void push(int a) {
            Node* newNode = new Node(a);
            newNode->prev = top;
            top = newNode;
            cout << a << " pushed onto the stack." << endl;
    }


    void pop() {
        if(top == nullptr){
            cout << "Stack underflow";
            return;
        }
        Node* temp = top;
        top = top->prev;
        delete temp;
        cout <<"Popped" <<endl;
    }


    void peek() {
        if(top == nullptr){
            cout << "Stack underflow";
            return;
        }
        cout << "TOS:" << top->data << endl;
    }


    void display() {
        if(top == nullptr){
            cout << "Stack underflow";
            return;
        }
        Node* current = top;
        while(current != nullptr){
            cout << "<-" << current->data;
            current = current->prev;
        }
    }
};
