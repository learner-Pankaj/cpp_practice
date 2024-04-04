#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,45,2,65,8,72,4,9,0,3,45};
    int len = sizeof(arr)/sizeof(arr[0]);
    int pos, num;
    cout << "Enter the position to insert element in array : ";
    cin >> pos;
    if(pos>len){
        cout << "this is out of range\n";
    }else{
        cout << "Enter the number to insert in array  : ";
        cin >> num;
        for (int i = len; i > pos; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos]=num;
        cout << "New Array \n";
        for (int i = 0; i < len; i++)
        {
            cout << " " << arr[i] << " " ;
        }
    }
    return 0;
}