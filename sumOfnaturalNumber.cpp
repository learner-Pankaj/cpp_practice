#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int j = 1;

    do{
        sum += j;
        j++;
    }while(j<=10);

    cout << "Sum of first 10 natural number : " << sum;

    return 0;
}