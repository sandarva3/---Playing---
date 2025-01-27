#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert at beginning
    void Binsert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void Einsert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete from beginning
    void Bdelete() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Delete from end
    void Edelete() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete.\n";
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    // Display the list
    void display() {
        Node* temp = head;
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    list.Binsert(10);
    list.Binsert(20);
    list.Einsert(30);
    list.Einsert(40);

    cout << "Linked list after insertions: ";
    list.display();

    list.Bdelete();
    cout << "After deleting from beginning: ";
    list.display();

    list.Edelete();
    cout << "After deleting from end: ";
    list.display();

    return 0;
}
