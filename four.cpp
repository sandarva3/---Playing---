//Operator overloading with friend function.
//Overloading + operator with friend function.
#include<iostream>
using namespace std;

class Complex {
	float x, y;
public:
	void setXY() {
		cout << "Enter x and y: ";
		cin >> x >> y;
	}
	void getXY() {
		cout << "X= " << x << " Y= "<< y;
	}
	friend Complex operator +(Complex& c, Complex& c1);
};

Complex operator +(Complex& c, Complex& c1) {
	Complex temp;
	temp.x = c.x + c1.x;
	temp.y = c.y + c1.y;
	return temp;
}

int main() {
	Complex c1;
	c1.setXY();
	Complex c2;
	c2.setXY();
	Complex c3;
	c3 = c1 + c2;
	cout << "Value of C3: " << endl;
	c3.getXY();
	return 0;
}