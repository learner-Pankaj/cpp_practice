#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of array. " ;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array. "<< endl ;

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int max = arr[0];

    for(int i=0; i<size; i++){
        if (arr[i]>=max)
        {
            max = arr[i];
        }
    }
    cout << "Largest element in the array is : " << max;
    return 0;

}