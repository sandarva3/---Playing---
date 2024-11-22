#include<iostream>
using namespace std;

class A {
public:
	int x;
};

class B :public A {

};

class C :public A {
};

//class D : public B, public C {
class D : public B, public C {
public:
	void set(int a){
		B::x = a;//We need to specify the parent class cause haven't used virtual base class method.
	}
	int get() {
		return C::x;//We are returning value of C's x. Which would be garbage value since we haven't set its value.
	}
};

void main() {
	D d1;
	d1.set(10);
	cout << "The value of x: " << d1.get();
}