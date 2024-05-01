#include <iostream>
#include <string>
using namespace std;

void countWords(string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        int ascii = s[i];
        if(ascii==32){
            count++;
        }
    }
    cout << "total words in the scentence is "<<count+1;
}

int main()
{
    string str = "this is me practicing the cpp programming for the interview";
    countWords(str);
    return 0;
}
