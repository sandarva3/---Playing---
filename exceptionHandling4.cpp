//It might not be practical to write every catch for every exception type case.
//So to handle any exception which are beyond the provided types of catch blocks
//a generic catch block is made, which catches all exceptions if it doesn't match any of one of catch block.
#include<iostream>
using namespace std;

void test(int x) {
	if (x == 1) {
		throw x;
	}
	else if (x == 0) {
		throw 'x';
	}
	else if (x == -1) {
		throw 1.0;//throw double data-type excpetion
	}
	else
		throw 1.0;
}

void main() {
	int a;
	cout << "Enter a number: ";
	cin >> a;
	try {
		test(a);
	}
	catch (int x) {
		cout << "Caught integer";
	}
	catch (char c) {
		cout << "Caught character";
	}
	catch (...) { //here there's no type for double type, so made this to handle it and any other forms of exceptions.
		cout << "Caught an Exception";
	}
	cout << endl << "This was the example of multiple catch statements.";
}