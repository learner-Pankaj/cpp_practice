#include<iostream>
using namespace std;

int main(){
    int large = 0;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<10; i++){
        if(large<arr[i]){
            large = arr[i];
        }
    }
    cout << large << endl;
    return 0;
}