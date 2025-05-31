#include<iostream>
using namespace std;

template<class T>

void arraySum(T a[], T size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    cout << "The sum is: " << sum;
}

int main() {
    int a[] = { 1,2,3,4,5 };
    arraySum(a, 5);
    return 0;
}