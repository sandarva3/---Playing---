//Class Template in c++
#include<iostream>
using namespace std;

template<class T> //Create a template of type 'T'

class First {
	T a;//It'll hold value of T type
public:
	First(){}
	First(T x) {
		a = x;
	}
	void set() {
		cout << "Enter value: ";
		cin >> a;
	}
	T get() { //return value of T type
		return a;
	}
};

int main() {
	First<int> f1(5); // Instantiating templating class with int: create an object of First class where T is replace with int data type.
	First<float> f2;
	f2.set();
	cout << "F1 value: " << f1.get();
	cout << " F2 value: " << f2.get();
	return 0;
}