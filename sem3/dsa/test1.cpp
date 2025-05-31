#include <iostream>
#define size 10
using namespace std;

class Dequeue {
    int arr[size];
    int f, r;

public:
    Dequeue() {
        f = -1;
        r = -1;
    }

    bool isEmpty() {
        return (f == -1);
    }

    bool isFull() {
        return ((f == 0 && r == size - 1) || (f == r + 1));
    }

    void fenqueue() {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }

        int val;
        cout << "Enter a value to insert at front: ";
        cin >> val;

        if (f == -1) { // If queue is initially empty
            f = r = 0;
        } else if (f == 0) { // Move f to last index in circular manner
            f = size - 1;
        } else {
            f--;
        }

        arr[f] = val;
        cout << "Inserted at front\n";
    }

    void renqueue() {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }

        int val;
        cout << "Enter a value to insert at rear: ";
        cin >> val;

        if (f == -1) { // If queue is initially empty
            f = r = 0;
        } else if (r == size - 1) { // Move r in circular manner
            r = 0;
        } else {
            r++;
        }

        arr[r] = val;
        cout << "Inserted at rear\n";
    }

    void fdequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        int y = arr[f];
        cout << "Front Dequeued: " << y << endl;

        if (f == r) { // If last element is dequeued
            f = r = -1;
        } else if (f == size - 1) { // Move front circularly
            f = 0;
        } else {
            f++;
        }
    }

    void rdequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        int y = arr[r];
        cout << "Rear Dequeued: " << y << endl;

        if (r == f) { // If last element is dequeued
            f = r = -1;
        } else if (r == 0) { // Move rear circularly
            r = size - 1;
        } else {
            r--;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements: ";
        int i = f;
        while (true) {
            cout << arr[i] << " ";
            if (i == r) break;
            i = (i + 1) % size; // Move in circular manner
        }
        cout << "End\n";
    }
};

int main() {
    int choice;
    Dequeue d1;

    do {
        cout << "\nEnter choice:\n";
        cout << "1. Fenqueue (Insert Front)\n";
        cout << "2. Renqueue (Insert Rear)\n";
        cout << "3. Fdequeue (Remove Front)\n";
        cout << "4. Rdequeue (Remove Rear)\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";

        cin >> choice;

        switch (choice) {
            case 1:
                d1.fenqueue();
                break;

            case 2:
                d1.renqueue();
                break;

            case 3:
                d1.fdequeue();
                break;

            case 4:
                d1.rdequeue();
                break;

            case 5:
                d1.display();
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 6);

    return 0;
}

