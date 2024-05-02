#include <iostream>
using namespace std;

void sumArr(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += *(arr+i);
    }
    
    float avg = sum/n;
    cout << "Sum of the array : "<<sum << endl;
    cout << "Average is : "<< avg << endl;
}

int main()
{
    int arr[6];
    cout << "Enter the element in the array\n";
    for(int i=0; i<6; i++){
        cin >> arr[i];
    }
    
    sumArr(arr, 6);
    

    return 0;
}
