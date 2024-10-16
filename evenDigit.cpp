#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    for(int i=1000; i<=3000; i++){
        int flag=0;
        num = i;
        while(num!=0){
            int rem = num%10;
            num = num/10;
            if(rem%2==0){
                flag = 1;
            }else{
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout << i << ", ";
        }
    }
    cout << endl;

    return 0;
}
