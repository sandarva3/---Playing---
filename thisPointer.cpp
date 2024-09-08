//the compiler uses 'this' pointer to correctly identify the object and its data members internally.

#include<iostream>
using namespace std;

class A {
	int x;
public:
	void show() {
		cout << "The address of this object is: " << this; //Here this returns the base address of the object.
	}
	void set(int y);
	int get() {
		return this->x;
	}
};

void A::set(int y) {
	this->x = y; //use this pointer to set the value of 'x' data member of object to 'y'/provided value.
}
void main() {
	A a1;
	a1.show();
	a1.set(5);
	cout<< endl << "The value of x is: " << a1.get();
}

//'this' pointer is implicitly called by compiler to point/envoke/call to non-static member of an object. If a member is static, like member functions which
//is static by nature, then 'this' pointer can't be used to call that.

//static- there only exist a single copy of it, and every object share that common copy.