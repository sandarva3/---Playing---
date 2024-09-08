//Multiple inheritance, where a single base class inherits from multiple parent class.
#include<iostream>
using namespace std;

class One {
protected:
	int x;
public:
	void set1() {
		cout << "Enter x: ";
		cin >> x;
	}
	void show1(){
		cout << "X: " << x << endl;
	}
};

class Two {
protected:
	int y;
public:
	void set2() {
		cout << "Enter Y: ";
		cin >> y;
	}
	void show2() {
		cout << "Y: " << y << endl;
	}
};

class Three : public One, public Two {
public:
	void set12(int a, int b) {
		x = a;
		y = b;
	}
};

int main() {

	Three t1;
	t1.set12(5, 10);
	t1.show1();
	t1.show2();

	return 0;
}