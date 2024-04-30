#include <iostream>
using namespace std;

void gcd(int n1, int n2){
    int dividend, divisor;
    if(n1>n2){
        dividend = n1;
        divisor = n2;
    }else{
        dividend = n2;
        divisor = n1;
    }
    cout <<"dividend :: "<< dividend;
    cout <<"divisor :: "<< divisor << endl;
    
    int temp = dividend % divisor;
    while(temp!=0){
        
        dividend = divisor;
        divisor = temp;
        temp = dividend%divisor;
    }
    
    cout << divisor;
    
}

int main()
{
    int num1=8;
    int num2=20;
    gcd(num1, num2);

    return 0;
}
