#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1, str2;

    cout << "Enter a String : ";
    getline(cin, str1);

    cout << "Enter another String : ";
    getline(cin, str2);

    if(str1.size()==str2.size()){
        cout << "Entered string is equal" << endl;
    }else{
        cout << "Entered string is not equal" << endl;
    }
    return 0;
}