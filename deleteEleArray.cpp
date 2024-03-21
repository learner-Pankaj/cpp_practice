#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,45,2,65,8,72,4,9,0,3,45};
    int len = sizeof(arr)/sizeof(arr[0]);
    int pos;
    cout << "Enter the position of element in array to delete : ";
    cin >> pos;
    if(pos>len){
        cout << "this is out of range\n";
    }else{
        for (int i = pos; i < len; i++)
        {
            arr[i] = arr[i+1];
        }
        cout << "New Array \n";
        for (int i = 0; i < len; i++)
        {
            cout << " " << arr[i] << " " ;
        }
    }
    return 0;
}