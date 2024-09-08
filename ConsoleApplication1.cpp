//DYNAMIC CONSTRUCTOR
#include<iostream>
using namespace std;

class B;
class A {
	int a;
public:
	friend class B;
};

class B {
	int b;
public:
	void set(int x, int y, A& a1) {
		a1.a = x;
		b = y;
	}
	void get(A& a1) {
		cout << "Object A value= " << a1.a << ", Object B value= " << b << endl;
	}
};

void main() {
	A a1;
	B b1;
	b1.set(5, 10, a1);
	b1.get(a1);
}