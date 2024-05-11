#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //write data into the file
    ofstream fout;
    fout.open("input.txt");
    int n, num;
    cout << " how many number you want to write into the file :: ";
    cin >> n;
    cout << "Enter numbers in the file \n";
    for(int i=0; i< n; i++){
        cin >> num;
        fout << num << "\t";
    }
    fout.close();

    //read data from file
    ifstream fin;
    fin.open("input.txt");
    int sum=0;
    while(fin >> num){
        sum += num;
    }
    fin.close();
    cout << "sum of the numbers in the file :: "<< sum << endl;
    return 0;
}
