#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter the size of Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of Array." <<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }

    cout << "Sum of the element in the array is : " << sum << endl;
    return 0;
}