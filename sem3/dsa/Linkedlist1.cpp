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

class Linkedlist{
public:
    Node* head;

    Linkedlist(){
        head = nullptr;
    }

    void insert(int data, int pos){
        Node* newNode = new Node(data);
        if(pos == 1){
            newNode->next = head;
            head = newNode;
            cout << "inserted";
            return;
        }
        int count = 1;
        Node* current = head;
        while(count < pos-1 && current != nullptr){
            current = current->next;
            count++;
        }
        if(current == nullptr){
            cout << "limit exceeded";
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
        cout << "inserted" ;
    }

    void delete(int pos){
        if(pos == 1){
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "deleted";
            return;
        }
        Node* current = head;
        int count = 1;
        while(count < pos-1 && current != nullptr){
            current = current->next;
            count++;
        }
        if(current == nullptr){
            cout << "limit exceeded";
            return;
        }
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
        cout << "node deleted";
    }
}