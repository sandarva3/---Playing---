#include<iostream>
using namespace std;

class Polar {
	float r, a;
public:
	Polar() {
		r = 0;
		a = 0;
	}
	Polar(float x, float y) {
		r = x;
		a = y;
	}

	void show() {
		cout << "radius= " << r << ", angle= " << a << endl;
	}

	Polar operator +(Polar p1) {
		Polar temp;
		temp.r = r + p1.r;
		temp.a = a + p1.a;
		return temp;
	}
};

void main() {
	Polar p1(5, 10);
	Polar p2(15, 20);
	Polar p3 = p1 + p2;

	cout << "p1: ";
	p1.show();
	cout << "p2: ";
	p2.show();
	cout << "p3: ";
	p3.show();
}