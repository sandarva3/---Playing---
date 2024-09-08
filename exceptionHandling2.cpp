//Throw point outside the catch block

#include<iostream>
using namespace std;

void divide(int x, int y) {
	if (y != 0) {
		cout << "Result: " << (x / y);
	}
	else {
		throw(y); //Throw excpetion if the value of divisor is zero.
	}
}

void main() {
	int a, b;
	cout << "Enter a and b:";
	cin >> a >> b;
	try {
		divide(a, b);
	}
	catch (int x) {
		cout << "Exception occured. The value of divisor is: " << x;
	}
}