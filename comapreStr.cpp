#include <iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    string str1, str2;
    int count=0;
    getline(cin, str1);
    getline(cin, str2);
    
    if(str1==str2){
        cout << "Same" << endl;
    }else{
        cout << "Different\n";
    }
    
    return 0;
}
