//Dynamically create an object throug pointer.


#include<iostream>
using namespace std;

class Myclass{
public:
	Myclass(){
		cout << "Constructor";
	}
	~Myclass(){
		cout << "Destructor";
	}
	void show(){
		cout << "Function called";
	}
};

void main(){
	Myclass *ptr = new Myclass(); //create an object dynamically.
	ptr->show();
	delete ptr;
	ptr = nullptr;
}

