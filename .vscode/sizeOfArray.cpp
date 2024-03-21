#include <iostream>
using namespace std;

int main(){
    int arr[] = {100, 200, 300, 400, 500};
    int arraySize = 0;

    cout << "size of array : " << sizeof(arr) << endl;
    cout << "size of array : " << sizeof(arr[0]) << endl;

    arraySize = sizeof(arr) / sizeof(arr[0]);
    
    cout << "size of array : " << arraySize << endl;
    return 0;
}