#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "my name is Pankaj\n";
    char ch = 'a';
    int count = 0;
    
    int len = sizeof(str)/sizeof(str[0]);
    for(int i=0; i<len; i++){
        if(str[i]==ch){
            count++;
        }
    }
    cout << "Desired character occured " << count << " times.\n";
    return 0;
}
