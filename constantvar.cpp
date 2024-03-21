#include<iostream>
using namespace std;

int main(){
    int a;
    int var1 = 10;
    const int var2 = 20;
    int* p = const_cast<int*>(&var2);
    *p = 50;

    var1 = 100;
    // var2 = 200;

    cout << var1 << endl;
    cout << var2 << endl;
    return 0;

}