#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    int vowels =0 , consonents = 0, digits=0, spaces=0;
    cout << "Enter a string to check whether the given string has how many vowels, consonent, digits, and spaces\n";
    getline(cin, line);
    for(int i=0; line[i] != '\0'; i++){
        if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||
        line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U'){
            vowels++;
        }else if(line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z'){
            consonents++;
        }else if(line[i]>='0' && line[i]<='9'){
            digits++;
        }else if(line[i]==' '){
            spaces++;
        }
    }
    cout << "Vowels = "<< vowels << endl;
    cout << "Consonents = "<< consonents << endl;
    cout << "Digits = "<< digits << endl;
    cout << "Spaces = "<< spaces << endl;
    
    return 0;
}
