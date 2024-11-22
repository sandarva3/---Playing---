//Virtual destructors are used to envoke both derived class destructor and base class destructor in inheritance chain.
//when a derived class object through base pointer is deleted, then only base destructor is envoked normally. To also invoke
//derived destructor we put 'virtual' keyworkd in base destructor. It prevents resource leaks by envoking all destructor properly
//in inheritance chain.
#include<iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base Constructor" << endl;
	}
	virtual ~Base() { //Without virtual keyword here only base class destructor is called for 2nd object.
		cout << "Base Destructor" << endl;
	}
};

class Derived : public Base {
public:
	Derived() {
		cout << "Derived Constructor" << endl;
	}
	~Derived() {
		cout << "Derive destructor" << endl;
	}
	void show() {
		cout << "What's up? ";
	}
};

void main() {
	Derived d1; //one(1st) object of derived class.
	Base* ptr = new Derived(); //another(2nd) object of derived class created through base pointer.
	delete ptr; //destructor is called, for 2nd object.
}//normally destructor is automatically called upon exiting the block in which that object was created. so here destructor is called for 1st object.