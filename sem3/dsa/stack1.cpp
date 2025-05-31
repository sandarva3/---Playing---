#include<iostream>
using namespace std;
#define max 10

class Stack{
    int top = -1;
    int stack[max];

public:

    void push(int n){
        if(top == max-1){
            cout < "Stack overflow";
            return;
        }
        top++;
        stack[top] = n;
        cout << "pushed";
    }

    void pop(){
        if(top == -1){
            cout << "stack underflow";
            return;
        }
        int item = stack[top];
        top--;
        cout << "popped" << item;
    }

    void peek(){
        if(top == -1){
            cout < "stack underflow";
            return;
        }
        cout << "item: "<< stack[top];
    }

    void display(){
        if(top == -1){
            cout < "stack underflow";
            return;
        }
        for(int i=0; i<=top; i++){
            cout < stack[i];
        }
        cout << "done";
    }
};