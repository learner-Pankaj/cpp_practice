#include <iostream>
using namespace std;

void convertToBinay(int n){
    int binary[8];
    int index;
    while(n!=0){
        int rem = n%2;
        n=n/2;
        binary[index++]=rem;
    }
    
    for(int i = index-1; i>=0; i--){
        cout << binary[i] << " ";
    }
}

int main()
{
    int num = 29;
    convertToBinay(num);
    return 0;
}
