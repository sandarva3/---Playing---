#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int unsortedIndex = n;
    bool sorted = false;
    int temp;

    while(!sorted){
        sorted = true;
        for(int i = 0; i<unsortedIndex; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                sorted = false;
            }
        }
        unsortedIndex --;
    }
}

int main(){
    int n;
    cout << "How many numbers to enter: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "The array has been sorted: " << endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }

    return 0;
}