#include <iostream>
using namespace std;
int main()
{
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        int space = (2*5-1)-(2*i);
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
