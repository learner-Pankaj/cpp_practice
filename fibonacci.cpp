#include <iostream>
using namespace std;

void fibonacci(int n){
    int n1 = 0;
    int n2 = 1;
    int num =0;
    
    for(int i=0;i<n;i++){
        cout << n1 << ", ";
        num = n1+n2;
        n1 = n2;
        n2 = num;
    }
    
}

int main()
{
    int num=8;
    fibonacci(num);

    return 0;
}
