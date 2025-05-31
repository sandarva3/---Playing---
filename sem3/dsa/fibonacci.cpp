#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int a = 5;
    int fibo = fibonacci(a);
    cout << "The fibonacci series of 5 is: " << fibo;

    return 0;
}