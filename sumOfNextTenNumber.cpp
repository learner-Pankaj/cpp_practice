#include<iostream>
using namespace std;

int main(){
    int num=0, total = 0;
    cout << "Enter Number : ";
    cin >> num;
    for(int i=num; i<num+10; i++){
        total = i+total;
    }
    cout << total << endl;
    return 0;
}