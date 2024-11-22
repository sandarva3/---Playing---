//allows us to  create a generic function which can work for many data types.
#include<iostream>
using namespace std;

template<class T> //create a template for 'T' type

T add(T x, T y) {
	return x + y;
}

void main() {
	int a = 5, b = 10;
	cout << "Adding integers using template function: " << add(a, b);
	float x = 10.5, y = 20.5;
	cout << endl << "Adding float numbers using template function: " << add(x, y);
	double c = 10.5, d = 10.9;
	cout << endl << "Adding double numbers using template function: " << add(c, d);
}