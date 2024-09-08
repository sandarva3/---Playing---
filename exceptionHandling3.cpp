//Multiple catch statements
//Here we write many catch blocks with each for particular Exception type.
//The one to match is executed.
//if many matches then the first one to match is executed.
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
		throw 1.0;
	}
	else {
		cout << "No catch case matched";
	}
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
	catch (double f) { //Writing float type won't work here.
		cout << "Caught double value";
	}

	//After a particular catch block is executed then the program control moves to the first statement after
	//the last catch block.
	cout << endl << "This was the example of multiple catch statements.";
}