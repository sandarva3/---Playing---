#include <iostream>
#define SIZE 10

using namespace std;

class Queue {
private:
    int arr[SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;  
    }

    bool isFull() {
        return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue_front() {
        if (isFull()) {
            cout << "Queue is full!\n";
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = SIZE - 1;
        } else {
            front--;
        }
        arr[front] = val;
    }

    void enqueue_back(int val) {
        if (isFull()) {
            cout << "Queue is full!\n";
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == SIZE - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = val;
    }

    void dequeue_front() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Removed: " << arr[front] << "\n";
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == SIZE - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    void dequeue_back() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Removed: " << arr[rear] << "\n";
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = SIZE - 1;
        } else {
            rear--;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue elements are: ";
        if (front <= rear) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < SIZE; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Queue queue;
    int choice, value, count;

    while(choice != 6){
        cout << "1. Enqueue Front\n";
        cout << "2. Enqueue Back\n";
        cout << "3. Dequeue Front\n";
        cout << "4. Dequeue Back\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue at front: ";
                cin >> value;
                queue.enqueue_front(value);
                break;
            case 2:
                cout << "Enter value to enqueue at back: ";
                cin >> value;
                queue.enqueue_back(value);
                break;
            case 3:
                queue.dequeue_front();
                break;
            case 4:
                queue.dequeue_back();
                break;
            case 5:
                queue.display();
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}



