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
  
  void enqueue(){
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
  
  void dequeue(){
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

  void display(){
    if(isEmpty()){
      cout << "Queue is empty";
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
  while(choice != 4){
    cout << "Enter a choice: ";
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Display" << endl;
    cout << "4. Exit" << endl;
    cin >> choice;
    
    switch(choice){
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
        cout << "Exiting...";
        break;
      default:
        cout << "Invalid choice, please try again.";
      }
    }
  return 0;
}
