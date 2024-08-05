#include<iostream>
using namespace std;

class create {
	int size;
	int* arr;
public:
	create() {
		size = 0;
		arr = NULL;
	}
	create(int s) {
		size = s;
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = 0;
		}
	}
	void setValue(int index, int value) {
		arr[index] = value;
	}
	void getValue(int index) {
		cout << arr[index] << endl;
	}
	void display() {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << ", ";
		}
	}

};

int main() {
	create c1(5);
	c1.setValue(0, 25);
	c1.setValue(1, 30);
	cout << "Value at 0: ";
	c1.getValue(0);
	cout << "Value at 1: ";
	c1.getValue(1);
	c1.display();
}