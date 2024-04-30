#include <iostream>
#include<string>
using namespace std;


void palindrome(string str){
    string revStr;
    int len = str.length();
    for(int i=len-1;i>=0; i--){
        revStr += str[i];
    }
    
    if(str == revStr){
        cout << "Palindrome string";
    }else{
        cout << "not a palindrome string";
    }
    
}

int main()
{
    string s = "racecar";
    palindrome(s);

    return 0;
}
