#include<iostream>
using namespace std;

void reverseArray(int array[], int len);

int main(){
    int arr[5];
    cout << "Enter the element of array\n";
    for(int i=0; i<5;i++){
        cin >> arr[i];
    }
    cout << "====================================\n\n";
    reverseArray(arr, 5);
    return 0;
}

void reverseArray(int array[], int len){
    for(int i=len-1; i>=0; --i){
        cout << "index " << i << " : " << array[i] << endl;
    }
}