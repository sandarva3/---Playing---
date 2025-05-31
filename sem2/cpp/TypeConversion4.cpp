//Conversion through Constructor, one object to another.

#include <iostream>
#include <math.h>
using namespace std;

class Polar {
	float r;
	float a;
public:
	Polar() {
		r = 0;
		a = 0;
	}
	Polar(float x, float y) {
		r = x;
		a = y;
	}

	void display() {
		cout << "r= " << r << ", a= " << a << endl;
	}

	float getR() {
		return r;
	}
	float getA() {
		return a;
	}
};

class Rectangle {
	float xco;
	float yco;
public:
	Rectangle() {
		xco = 0;
		yco = 0;
	}
	Rectangle(float a, float b) {
		xco = a;
		yco = b;
	}
	//Constructor to accept Polar type object.
	Rectangle(Polar p1) {
		float r = p1.getR();
		float a = p1.getA();
		xco = r * cos(a);
		yco = r * sin(a);
	}

	void display() {
		cout << "xco= " << xco << ", yco= " << yco << endl;
	}
};


int main() {
	Polar p1(5.5, 1.2);
	Rectangle r1;
	r1 = p1; //same like Rectangle r1(p1);
	p1.display();
	r1.display();

	return 0;
}