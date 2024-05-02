
#include <iostream>
using namespace std;

void maxmin(int *arr, int n){
    int max = arr[0];
    int min = arr[0];
    
    for(int i = 0; i< n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    cout << "Maximum of all element :: " << max << endl;
    cout << "Minimum of all element :: " << min << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array :: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the element of the array\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    maxmin(arr, n);
    
    delete[] arr;

    return 0;
}
