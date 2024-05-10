#include<iostream>
#include<string>
using namespace std;


struct num{
    int data;
};

int main(){
    int MAX_NUMBER = 10;
    // struct num n[MAX_NUMBER];
    struct num* n = new num[MAX_NUMBER];
    
    cout << "Enter element of structure array \n";
    
    for(int i=0; i<MAX_NUMBER; i++){
        cin >> n[i].data;
    }
    
    cout << "Show the element of structure array\n";
    
    cout << "\nEntered element\n";
    for(int i=0; i<MAX_NUMBER; i++){
        cout << n[i].data << ", ";
    }
    cout << endl;
    return 0;
}
