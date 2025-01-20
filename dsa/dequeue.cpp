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
  
  void rdequeue(){
    if(isEmpty()){
      cout << "Queue is empty." << endl;
      return;
    }
    else{
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
