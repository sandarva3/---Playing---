//Single Inheritance, where only two class exists and one inherits from other.
#include<iostream>
using namespace std;

class Rectangle {
protected:
	int x, y;
public:
	void set() {
		cout << "Enter length, breadth: ";
		cin >> x >> y;
	}
	int area() {
		return x * y;
	}
};

class Volume : public Rectangle {
	int z;
public:
	void seth() {
		cout << "Enter Height: ";
		cin >> z;
	}
	int volume() {
		return (x * y * z);
	}
};

int main() {
	Rectangle r1;
	r1.set();
	cout << "Area: " << r1.area() << endl;
	Volume v1;
	v1.set();
	v1.seth();
	cout << "Volume: " << v1.volume();

	return 0;
}