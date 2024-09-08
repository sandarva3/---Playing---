//In inheritance if a base class has a constrcutor:
// -Default constructor: then it's not mandatory for derived class to have constructor.
//-Paramterized constructor: Then it's mandatory for derived class to have constructor, because it needs to pass the value/arguments to base 

#include<iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base ";
	}
};

class derived: public Base{
public:
	derived() {
		cout << "Derived";
	}
};

void main() {
	derived d1;
}

//When d1 object is created then first Base class constuctor is called, then derived class constructor.