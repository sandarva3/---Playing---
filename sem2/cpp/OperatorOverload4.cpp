//Overloading + operator to add two complex objects

#include<iostream>
using namespace std;

class Complex {
	float r, i;
public:
	Complex(){}
	Complex(float x, float y) {
		r = x;
		i = y;
	}
	void show() {
		cout << "Values: " << r << " + " << i << endl;
	}

	Complex operator +(Complex c1) {
		Complex temp;
		temp.r = r + c1.r;
		temp.i = i + c1.i;
		return temp;
	}

};

void main() {
	Complex c1(5, 10);
	Complex c2(15, 20);
	Complex c3;
	c3 = c1 + c2;
	cout << "C1: ";
	c1.show();
	cout << "C2: ";
	c2.show();
	cout << "C3: ";
	c3.show();
}