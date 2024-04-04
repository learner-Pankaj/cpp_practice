#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("my.txt", ios::app);
    int pos = fout.tellp();
    cout << pos << endl;
    fout << " is studying";
    pos = fout.tellp();
    cout << pos << endl;
    fout.close();
    return 0;
}