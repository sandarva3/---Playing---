//Polar Coordinates
//Overloading + operator

#include<iostream>
#include<math.h>
using namespace std;

class Polar {
	float radius, angle;
	float getX() {
		return (radius * cos(angle));
	}
	float getY() {
		return (radius * sin(angle));
	}
public:
	Polar() {
		radius = 0;
		angle = 0;
	}
	Polar(float r, float y) {
		radius = r;
		angle = y;
	}

	Polar operator +(Polar& p1) {
		Polar temp;
		float x = p1.getX();
		float y = p1.getY();
		temp.radius = sqrt(x * x + y * y);
		temp.angle = atan(y/x);
		return temp;
	}

	void show() {
		cout << "(" << radius << ", " << angle << ")" << endl;
	}
};

int main() {
	Polar p1;
	Polar p2(5, 10);
	Polar p3;
	p3 = p1 + p2;
	cout << "The pole of P1: ";
	p1.show();
	cout << "The pole of P2: ";
	p2.show();
	cout << "The pole of P3: ";
	p3.show();
	return 0;
}