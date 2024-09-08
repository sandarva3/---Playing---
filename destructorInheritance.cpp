//In destructor inheritance First derived destructor is called and then base destructor is called.
//It's because derived class is built upon base class, so for constructor:
// -Base first, then derived 
//for destructor:
//-derived first, then base.

#include<iostream>
using namespace std;

class Base {
public:
	Base() { //Constructor can't return anything. It's used to initialize an object immediately after it's created.
		cout << "Base Constructor" << endl;
	}
	~Base() { //We can't pass argument in destructor, neither it can return any values. It's automatically envoked by compiler upon deletion of object
		cout << "Base Destructor" << endl; //or file to free up the resouces that object had taken.
	}
};

class Derived: public Base{
public:
	Derived() {
		cout << "Derived Constructor" << endl;
	}
	~Derived() {
		cout << "Derive destructor" << endl;
	}
};

void main() {
	Derived d1;
}

//output: 
//Base Constructor
//Derived Constructor
//Derive destructor
//Base Destructor