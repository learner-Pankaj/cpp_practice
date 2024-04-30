#include <iostream>
using namespace std;

void primeNum(int n){
    int l =n/2;
    bool prime = true;
    if(n<=1){
        prime = false;
    }else{
        for(int i=2;i<=l;i++){
            if(n%i==0){
                prime = false;
                break;
            }
        }
    }
    
    if(prime){
        cout << "prime number";
    }else{
        cout << "not a prime number\n";
    }
}

int main()
{
    int num=15;
    primeNum(num);

    return 0;
}
