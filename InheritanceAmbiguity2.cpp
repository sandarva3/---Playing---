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
};

int main() {
	C c1;
	c1.A::set(5);//Another way to resolve ambiguity problem is to use scope resolution to call specific class's
	c1.B::set(10);//function.
	cout << "SUM : " << c1.sum();
}