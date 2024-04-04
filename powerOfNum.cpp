#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num, power;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Enter power of the num : ";
    cin >> power;
    int result = pow(num, power);
    cout << "Solution of the number : " << result;

    float res = sqrt(num);
    cout << "\n Square root of the number : " << res;
    return 0;
}