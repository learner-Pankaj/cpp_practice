#include <iostream>
#include<unordered_map>
using namespace std;

void countCharacter(string str){
    unordered_map<char, int> umap;
    for(char c : str){
        umap[c]++;
    }
    
    for(auto& p:umap){
        cout << p.first << p.second << endl;
    }
}

int main()
{
    string str = "hello";
    countCharacter(str);

    return 0;
}
