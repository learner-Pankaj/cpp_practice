#include <iostream>
using namespace std;

int fact(int n){
    
    if(n == 0 || n == 1){
        return 1;
    }else{
        int mul=n*(fact(n-1));
        return mul;
    }
}

int main()
{
    int num=8;
    int factorial = fact(num);
    cout << factorial;

    return 0;
}
