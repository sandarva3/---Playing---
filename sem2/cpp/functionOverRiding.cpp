//function overriding is runtime polymorphism and its made possible through virtual function in base class. Base class 
//poiner is used to point to derive class object and envoke its method.
#include<iostream>
using namespace std;

class Base {
public:
    virtual void display() {  // Virtual function in base class
        cout << "Base class display";
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display";
    }
};

int main() {
    Base* ptr;
    Derived d1;
    ptr = &d1;
    ptr->display();
    return 0;
}