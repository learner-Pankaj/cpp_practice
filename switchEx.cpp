#include<iostream>
#include<string>
using namespace std;
/*the switch statement is designed to work with integral and enumeration types*/
int main(){
    string str = "test";
    switch (str)
    {
    case "test":
        /* code */
        cout << "Test is running";
        break;
    
    default: cout << "String cannot be used as case";
        break;
    }
}