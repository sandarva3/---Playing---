#include<iostream>
using namespace std;

template<class T>

T Max(T arr[], int size) { //funciont which accepts array of T type and its size in int.
	T max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

void main() {
	int a[] = { 1,2,3,4,5 };
	float b[] = { 1.9, 2.2, 5.5, 2.3 };
	cout << "The max value in array 'a' is: " << Max(a, 5);
	cout << "The max value in array 'b' is: " << Max(b, 5);
}