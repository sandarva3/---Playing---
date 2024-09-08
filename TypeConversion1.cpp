//Type conversion from int to class.
//WE use constructor to convert from int to class, providing int argument in constructor.

#include<iostream>
using namespace std;

class Roll {
	int roll;
public:
	Roll() {}
	Roll(int x) {
		roll = x;
	}
	int get() {
		return roll;
	}
};

void main() {
	int a;
	Roll rollno;
	cout << "Enter roll no: ";
	cin >> a;
	rollno = a; //Here we assign int to class, which effectively envokes parameterized constructor, passing given int as an argument.
	cout << "Type converted from int to class." << endl;
	cout << "The value of Rollno is: " << rollno.get();
}