#include<iostream>
#define size 10
using namespace std;

class Queue{
  int arr[size];
  int f,r;
  
public:
  Queue(){
    f = -1;
    r = -1;
    }
    
  bool isEmpty(){
    if(f== -1){
      return true;
    }
    else{
      return false;
    }
  }
  
  bool isFull(){
    if(r == size-1){
      return true;
    }
    else{
      return false;
    }
  }


  void fenqueue(){
    if(isFull()){
      cout << "Queue is full." << endl;
      return;
    }
    else{
      int val;
      cout << "Enter a value to Fenqueue: ";
      cin >> val;
      if(f == -1){
        f = 0;
        r = 0;
      }
      else{
        f-- ;
      }
      arr[f]= val;
      cout << "Inserted from front." << endl;
    }
  }

  
  void renqueue(){
    if(isFull()){
      cout << " Queue is full" << endl;
      return;
    }
    else{
      int val;
      cout << "Enter a value to enqueue: ";
      cin >> val;
      if(r == -1){
        f = 0;
        r = 0;
        }
      else{
        r++;
        }
      arr[r] = val;
      cout << "Inserted" << endl;
    }
  }
  

  void fdequeue(){
    int y;
    if(isEmpty()){
      cout << "Queue is empty" << endl;
      return;
    }
    else{
      y = arr[f];
      if(f == r){
        f = -1;
        r = -1;
      }
      else{
        f++;
      }
      cout << "Dequeued: " << y << endl;
    }
  }
  
  
  void rdequeue(){
    if(isEmpty()){
      cout << "Queue is empty." << endl;
      return;
    }
    else{#include <iostream>
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

      int y = arr[r];
      if(r == f){
        r = -1;
        f = -1;
      }
      else{
        r--;
      }
      cout << "Dequeued from rear: " << y << endl;
    }
  }
  
  
  void display(){
    if(isEmpty()){
      cout << "Queue is empty" << endl;
      return;
    }
    else{
      for(int i=f; i<=r; i++){
        cout << arr[i] << ", ";
      }
      cout << endl;
    }
  }
  
};

int main(){
  Queue q1;
  int choice = 0;
  while(choice != 6){
    cout << "Enter a choice: ";
    cout << "1. Enqueue from front." << endl;
    cout << "2. Enqueue from rear." << endl;
    cout << "3. Dequeue from front." << endl;
    cout << "4. Dequeue from rear." << endl;
    cout << "5. Display" << endl;
    cout << "6. Exit" << endl;
    cin >> choice;
    
    switch(choice){
      case 1:
        q1.fenqueue();
        break;
      case 2:
        q1.renqueue();
        break;
      case 3:
        q1.fdequeue();
        break;
      case 4:
        q1.rdequeue();
        break;
      case 5:
        q1.display();
        break;
      case 6:
        cout << "Exiting...";
        break;
        
      default:
        cout << "Invalid choice, please try again.";
      }
    }
  return 0;
}
