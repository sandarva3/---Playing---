//Multiple types of data for a function template.

#include<iostream>
using namespace std;

template<class T, class T1, class T2>

void cal(T a[], T1& sum, T2& avg, int size) {
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	avg = (sum / size);
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int sum1 = 0, avg = 0;
	cal(a, sum1, avg, 5);
	cout << "The sum is: " << sum1 << " The avg is: " << avg;
	return 0;
}