#include<iostream>
using namespace std;

int main(){
    int first, last, num = 0;
    int mid = 0 ;

    cout << "Enter number \n";
    cin >> num ;
    
    first = num/100;
    last = num % 10;
    mid = (num/10)%10;

    cout << "First number is : " << first << endl;
    cout << "Last number is : " << last << endl;
    cout << "Middle number is : " << mid << endl;

    return 0;
}