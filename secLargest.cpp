

#include<iostream>
using namespace std;

int secondLargestEle(int [], int);

int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter the element of the array. \n";
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int secLargest = secondLargestEle(arr, n);
    
    cout << "Second largest element of the array : "<< secLargest << endl;
}

int secondLargestEle(int arr[], int n){
    int secondlargest=0;
    int largest = 1;
    
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest = arr[i];
        }
    }
    
    return secondlargest;
}
