
#include <iostream>
using namespace std;

int num(int n2){    
    int count=0;
    int temp = n2;
    while(n2!=0){
        int num = n2%10;  
        n2 = n2/10;
        if(temp%num==0){
            count++;
        }
    }
    return count;
}
int main()
{
    int n = 123;
    int n1 = num(n);
    cout << n1 << endl;
    return 0;
}
