#include<iostream>
using namespace std;
#define size 10
class Queue{
public:
    int queue[size];
    int front = -1;
    int rear = -1;

    void enqueue(int data){
        if((rear+1)%size == front){
            cout << "queue full";
            return;
        }
        if(front == -1){
            front = rear = 0;
        }
        else{
            rear = (rear+1) % size;
        }
        queue[rear] = data;
        cout << "inserted";
    }

    void dequeue(){
        if(front == -1){
            cout << "Queue empty";
            return;
        }
        int item = queue[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front+1)%size;
        }
        cout << "dequeudd";
    }

    void display(){
        if(front == -1){
            cout << "empty queue";
            return;
        }
        int i = front;
        while(true){
            cout << queue[i] << " ";
            if(i==rear){
                break;
            }
            i = (i+1) % size;
        }
        cout << "DONE";
    }
};