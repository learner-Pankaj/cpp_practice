#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a charecter";
    cin >> ch;
    int alphabet = ch;
    if(alphabet >= 65 && alphabet<=90){
        cout << "Entered charecter is Uppercase." << endl;
    }
    else if(alphabet >= 97 && alphabet<=122){
        cout << "Entered charecter is Lowercase." << endl;
    }
    else{
        cout << "Invalid Input" << endl;
    }
}