//Diamond problem in function.
#include<iostream>
using namespace std;

class A {
public:
	void show() {
		cout << "Hi";
	}
};

class B :virtual public A {
	
};

class C :virtual public A {
};

//class D : public B, public C {
class D: public B, public C{
};

void main() {
	D d1;
	d1.show();
}