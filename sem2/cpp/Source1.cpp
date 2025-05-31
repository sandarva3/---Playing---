#include<iostream>
using namespace std;

class A {
	int a;
public:
	class B {
		int b;
	public:
		void setB(int x) { b = x; }
		int getB() { return b; }
	};
	void setA(int y) { a = y; }
	int  getA() { return a; }
};

int main() {
	A a1;
	a1.setA(9);
	A::B b1;
	b1.setB(0);
	cout << "THE value of A is: " << a1.getA() << endl;
	cout << "THE value of B is: " << b1.getB();
	return 0;
}