#include<iostream>
using namespace std;

class A {
protected:
	int a;
public:
	void set(int x) {
		a = x;
	}
};

class B {
protected:
	int b;
public:
	void set(int x) {
		b = x;
	}
};

class C :public A, public B {
public:
	int sum() {
		return a + b;
	}
	//One way to resolve function ambiguity problem is to define the same function signature in derived class.
	void set(int x, int y) { // if we don't define set() here then it'd be ambiguous error.
		a = x;
		b = y;
	}
};

int main() {
	C c1;
	c1.set(5,10); //set() of class C is called.
	cout << "SUM : " << c1.sum();
}