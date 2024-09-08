//DYNAMIC CONSTRUCTOR
#include<iostream>
using namespace std;

class A {
	int* ptr;
public:
	A(int x) {
		ptr = new int;
		*ptr = x;
	}
	~A() {
		delete ptr;
	}

	void show() {
		cout << "Value: " << *ptr << endl;
	}
};

void main() {
	A a1(50);
	a1.show();
}