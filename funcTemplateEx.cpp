#include<iostream>
#include<string>
using namespace std;

template <class T>
T sum(T x, T y){
    return x+y;
}

int main(){
    cout << sum<int>(1,3) << endl;
    cout << sum<double>(1.5,3.8) << endl;
    cout << sum<string>("pankaj ", "yadav") << endl;
    return 0;
}
