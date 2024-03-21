#include<iostream>
using namespace std;

int main(){
    int next, first=0, second=1;
    cout << "Enter a num till 10 digit" << endl;
    int num;
    cin >> num;
    for(int i=0;i<num;i++){ 
        cout << first << " ,";
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}