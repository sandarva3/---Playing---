//If base class has parameterized constructor then it's mandatory to have derived constructor.

#include<iostream>
using namespace std;

class Base {
public:
	Base(int x, int y) {
		cout << "sum: " << x + y;
	}
};

class derived: public Base{
public:
	derived():Base(1,2){} // we need to do this incase of default constructor.
	derived():{}  //It's error to do this.
	derived(int x, int y): Base(x,y) {
		cout << ". The value of x and y: " << x <<", " << y;
	}
	void show() {
		cout << "This is derived class";
	}
};

void main() {
	derived d1(5, 10);
}

