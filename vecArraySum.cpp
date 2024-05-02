
#include <iostream>
#include<vector>
using namespace std;

void sumArr(vector<int> &arr){
    int sum=0;
    for(int num : arr){
        sum +=num;
    }
    cout << "Sum = "<< sum << endl;
    
    float avg = (float)sum/arr.size();
    
    cout << "Average = "<< avg << endl;
}

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    vector<int> arr(size);
    
    
    cout << "Enter the element of array : ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    sumArr(arr);

    return 0;
}
