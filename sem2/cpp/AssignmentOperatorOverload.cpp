//Overloading of assignment += operator.
#include<iostream>
using namespace std;

class first {
	int a;
public:
	void set() {
		cout << "Enter a: ";
		cin >> a;
	}
	int get() {
		return a;
	}
	void operator +=(first& f);
};

void first:: operator +=(first& f1) {
	cout << "Assignment Operator has been overloaded.";
}

int main() {
	first f1;
	f1.set();
	first f3;
	f3 += f1;
	return 0;
}