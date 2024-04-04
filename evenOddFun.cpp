#include<iostream>
using namespace std;

void EvenOdd(int a){
    if(a%2==0){
        cout << "Given number is Even" << endl;
    }else{
        cout << "Given number is Odd" << endl;
    }
}

int main(){
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    EvenOdd(num);
    return 0;
}