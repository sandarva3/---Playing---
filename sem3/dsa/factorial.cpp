#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int a = 5;
    int fact = factorial(5);

    cout << "The factorial of 5 is: " << fact;

    return 0;
}