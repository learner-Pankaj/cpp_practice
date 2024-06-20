#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int v,c,n,s;
    v=c=n=s=0;
    getline(cin, str);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            v++;
        }else if((str[i]>='a' && str[i]<='z') ||(str[i]>='A' && str[i]<='Z')){
            c++;
        }else if((str[i]>='0' && str[i]<='9')){
            n++;
        }else if(str[i]==' '){
            s++;
        }
    }
    
    cout << "Vowel :: " << v << endl;
    cout << "Consonent :: " << c << endl;
    cout << "Number :: " << n << endl;
    cout << "Space :: " << s << endl;

    return 0;
}
