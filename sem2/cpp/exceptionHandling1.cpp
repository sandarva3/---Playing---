#include<iostream>
using namespace std;

void main() {
	int a, b;
	cout << "Enter a and b:";
	cin >> a >> b;
	try {
		if (b != 0) {
			cout << "Division: " << (a / b);
		}
		else {
			throw(b);//pass the program execution flow to catch() block along with argument.
		}
	}
	catch (int x) {
		cout << "Exception occured: " << x;
	}
}

//The exceptions are thrown by function inside try block. The point at which the throw() is executed is called throw point. And once the throw point is 
//executed the program control permanently moves to catch block irrespective of the location of the throw point.