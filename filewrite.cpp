#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("my.txt");
    fout << "Pankaj \nYadav";
    fout.close();
    return 0;
}