
#include<iostream>
using namespace std;

class Myclass {
public:
	Myclass() {
		cout << "Constructor, ";
	}
	~Myclass() {
		cout << "Destructor, ";
	}
	void show() {
		cout << "Function called"<<endl;
	}
};

void main() {
	Myclass* ptr = new Myclass[3];
	for (int i = 0; i < 3; i++) {
		ptr[i].show(); //ptr[i]->show(); won't work.
	}
	delete[] ptr; //deleting an array of objects which pointer pointed to.
	ptr = nullptr;
}