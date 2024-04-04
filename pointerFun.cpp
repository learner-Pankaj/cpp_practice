#include<iostream>
using namespace std;

const int MAX=5;
void printArray(int *ptr);

int main(){
    int arr[MAX] = {23,65,7,32,56};
    printArray(arr);
    return 0;
}

void printArray(int *ptr){
    for(int i=0; i<MAX; i++){
        cout << endl << *ptr++;
    }
}