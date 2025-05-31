#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};

class Queue{
public:
    Node* front;
    Node* rear;
    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int val){
        Node* newNode = new Node(val);
        if(rear == nullptr){
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        cout << "Enqueued.";
    }

    void dequeue(){
        if(front == nullptr){
            cout << "empty queue";
            return;
        }
        Node* temp = front;
        front = front->next;
        if(front == nullptr){
            rear = nullptr;
        }
        delete temp;
        cout <<"dequeued";
    }

    void display(){
        if(front == nullptr){
            cout << "Empty queue";
            return;
        }
        Node* current = front;
        while(current != nullptr){
            cout << current->data << "->";
            current = current->next;            
        }
    }
};