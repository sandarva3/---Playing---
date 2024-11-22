//It's not mandatory for derived class to have constructor if base class constructor is Default constructor.


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
	void show() {
		cout << "This is derived class";
	}
};

void main() {
	derived d1;
}

//Here after create derived object, the base constructor is automatically called.