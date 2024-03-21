#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter a String : ";
    // cin >> str;  //cin will take a word untill it find a space
    getline(cin, str);
    cout << str << endl;
    return 0;
}