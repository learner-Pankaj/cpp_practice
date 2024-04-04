#include<iostream>
using namespace std;

bool isArmstrong(int n);

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Lets check the number is armstrong number or not." << endl;
    if(isArmstrong(num)){
        cout << "Entered number is Armstrong number" << endl;
    }else{
        cout << "Entered number is not an Armstrong number" << endl;
    }
    return 0;
}

bool isArmstrong(int n){
    int originalNum = n;
    int sum=0;
    while(n!=0){
        int a = n%10;
        sum += a*a*a;
        n = n/10;
    }
    return originalNum == sum;
}