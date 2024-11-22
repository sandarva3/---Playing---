#include<iostream>
using namespace std;

template<class T, class T1>

void calculate(T arr[], T1 &sum, T1 &avg, int size) { //Here we take an address of passed argument variable, we can direcly modify that variable's value.
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	avg = sum / 2;
}

void main() {
	int a[] = { 1,2,3,4,5 };
	float sum = 0, avg = 0;
	calculate(a, sum, avg, 5);
	cout << "The sum of values of array 'a' is: " << sum << ". The average is: " << avg <<endl;
	float b[] = { 1.1, 2.2, 3.3, 4.4};
	float sum1 = 0, avg1 = 0;
	calculate(b, sum1, avg1, 4);
	cout << "The sum of values of array 'b' is: " << sum1 << ". The average is: " << avg1;
}