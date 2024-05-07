#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout << "Enter a number to find square root of the number :: ";
    cin >> num;
    
    try{
        if(num<0){
            throw runtime_error("Cannot calculate square root of a negative number");
        }else if(num==0){
            throw runtime_error("square root of zero is zero");
        }else{
            cout << sqrt(num);
        }
    }catch(runtime_error& r){
        cout << r.what() << endl;
    }catch(runtime_error& runtime){
        cout << runtime.what() << endl;
    }
    return 0;
}
