#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    char ch;

    fin.open("my.txt");

    while(!fin.eof()){
        cout << ch;
        fin >> ch;
    }
    fin.close();
    return 0;
}
