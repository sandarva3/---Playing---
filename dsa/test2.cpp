#include <iostream>
#define size 10
using namespace std;

class LinearQueue {
  int arr[size];
  int f, r;

public:
  LinearQueue() {
    f = -1;
    r = -1;
  }

  bool isEmpty() {
    return (f == -1);
  }

  bool isFull() {
    return (r == size - 1);
  }

  void enqueue() {
    if (isFull()) {
      cout << "Queue is full\n";
      return;
    }
    int val;
    cout << "Enter a value to enter: ";
    cin >> val;
    if (f == -1) {
      f = 0;
    }
    r++;
    arr[r] = val;
    cout << "Inserted\n";
  }

  void dequeue() {
    if (isEmpty()) {
      cout << "Queue is empty\n";
      return;
    }
    int y = arr[f];
    cout << "Dequeued: " << y << endl;
    if (f == r) { // Reset queue if last element is dequeued
      f = -1;
      r = -1;
    } else {
      f++;
    }
  }

  void display() {
    if (isEmpty()) {
      cout << "Queue is empty\n";
      return;
    }
    for (int i = f; i <= r; i++) {
      cout << arr[i] << " ";
    }
    cout << "End\n";
  }
};

int main() {
  int choice;
  LinearQueue q1;
  do {
    cout << "\nEnter choice:\n";
    cout << "1. Enqueue\n";
    cout << "2. Dequeue\n";
    cout << "3. Display\n";
    cout << "4. Exit\n";
    cin >> choice;

    switch (choice) {
      case 1:
        q1.enqueue();
        break;
      case 2:
        q1.dequeue();
        break;
      case 3:
        q1.display();
        break;
      case 4:
        cout << "Exiting...\n";
        break;
      default:
        cout << "Invalid choice\n";
    }
  } while (choice != 4);
  
  return 0;
}

