#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str1;

    getline(cin, str1);

    int len = str1.length();
    
    for(int i=len; i>=0; --i){
        cout << str1[i];
    }
    cout << endl;
    
    return 0;
}
