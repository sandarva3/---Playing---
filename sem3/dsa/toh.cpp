#include<iostream>
using namespace std;

void toh(int n, char src, char aux,char dest){
    if(n==1){
        cout << "move disk 1 from" << src << "to" << dest;
        return;
    }

    toh(n-1, src, dest, aux);
    cout << " Move disk " << n << " from " << src << " to " << dest;
    toh(n-1, aux, src, dest);
}