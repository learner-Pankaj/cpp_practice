#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int count=0;
    getline(cin, str);
    cout << "put the character to get the frequency of it, in the scentece\n";
    char ch ;
    cin >> ch;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            count++;
        }
    }
    cout << "Frequency of "<< ch <<" :: "<<count << endl;
    
    return 0;
}
