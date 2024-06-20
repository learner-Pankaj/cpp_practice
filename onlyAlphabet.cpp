
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            cout << str[i];
        }
    }
    cout << endl;

    return 0;
}
