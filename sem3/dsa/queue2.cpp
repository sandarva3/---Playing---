#include<iostream>
using namespace std;
#define max 10
class Queue{
public:
    int queue[max];
    int front = -1;
    int rear = -1;

    void enqueue(int data){
        if(rear == max-1){
            cout << "queue full";
            return;
        }
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = data;
        cout << "inserted";
    }

    void dequeue(){
        if(front == -1){
            cout << "Queue empty";
            return;
        }
        int item = queue[front];
        front++;
        if(front > rear){
            front = rear = -1;
        }
        cout << "dequeudd";
    }

    void display(){
        if(front == -1){
            cout << "empty queue";
            return;
        }
        for(int i = front; i<=rear; i++){
            cout << queue[i] << " ";
        }
        cout << "DONE";
    }
};