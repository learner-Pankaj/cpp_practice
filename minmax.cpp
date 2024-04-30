#include <iostream>
using namespace std;

void maxmin(int* arr, int n){

    int max=arr[0];
    int min=arr[0];
    
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    
    cout << max << endl;
    cout << min << endl;
    
}


int main()
{
    int arr[] = {2,5,3,6,8,3,4}; 
    
    maxmin(arr, 7);

    return 0;
}
