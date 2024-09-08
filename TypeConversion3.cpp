//Conversion through type conversion routine, from one object to another.


#include <iostream>
#include <math.h>
using namespace std;

class Rectangle;
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

	//Declaration of type conversion routine
	operator Rectangle();

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

	void display() {
		cout << "xco= " << xco << ", yco= " << yco << endl;
	}
};

//Conversion routine definition.
Polar::operator Rectangle() {
	float xco = r * cos(a);
	float yco = r * sin(a);
	return Rectangle(xco, yco);
}

int main() {
	Polar p1(5.5, 1.2);
	Rectangle r1;
	r1 = p1;
	p1.display();
	r1.display();

	return 0;
}