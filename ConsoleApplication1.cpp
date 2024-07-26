#include<iostream>
using namespace std;

template<class T>

class First {
	T a;
public:
	First(){}
	First(T x) {
		a = x;
	}
	void set() {
		cout << "Enter value: ";
		cin >> a;
	}
	T get() {
		return a;
	}
};

int main() {
	First<int> f1(5);
	First<float> f2;
	f2.set();
	cout << "F1 value: " << f1.get();
	cout << " F2 value: " << f2.get();
	return 0;
}