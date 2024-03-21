#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[] = {2,4,5,7,2,4,3,2,7,8,2,3,1,6};
    int count = 0;
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<length; i++){
        count++;
        for (int j = i+1; j < length; j++){
            if(arr[i]==arr[j]){
                cout << "duplicate element : " << arr[i]<<endl;
            }
        }
    }
    return 0;
}