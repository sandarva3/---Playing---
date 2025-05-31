//Diamond problem in data member.
#include<iostream>
using namespace std;

class A {
public:
	int x;
};

class B :virtual public A {

};

class C :virtual public A { //if we remove virtual here then we need to specify parent class while setting value of x down below.
};

//class D : public B, public C {
class D : public B, public C {
public:
	void set(int a){
		x = a; //There no exist only one instance of A so we don't need to specify parent class.
	}
	int get() {
		return x;
	}
};

void main() {
	D d1;
	d1.set(10);
	cout << "The value of x: " << d1.get();
}