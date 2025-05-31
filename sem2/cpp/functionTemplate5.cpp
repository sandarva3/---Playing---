//sum of array using template function

#include<iostream>
#include<string>
using namespace std;

template<class T>

void arraySum(T a[], int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	cout << "The sum is: " << sum << endl;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	arraySum(a, 5);

	float b[] = { 1.1 ,2.2, 3.3, 4.4, 5.5 };
	arraySum(b, 5);

	return 0;
}