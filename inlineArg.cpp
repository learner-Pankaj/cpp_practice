#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string n;
    int sum =0;
    
    getline(cin, n);
    
    stringstream ss(n);
    int number;
    while(ss >> number){
        sum+=number;
    }
    
    cout << sum << "\n ";
    
    cout << endl;
    
    return 0;
}
