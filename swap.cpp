#include <iostream>
using namespace std;

void swapNum(int* p, int* q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int a, b;
    cout << "Enter two number\n";
    cin >> a >> b;
    cout << "before swap :: a="<<a<<", b="<<b<<endl;
    swapNum(&a, &b);
    cout << "after swap :: a="<<a<<", b="<<b<<endl;
    return 0;
}
