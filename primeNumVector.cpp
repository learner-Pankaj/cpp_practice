#include<iostream>
#include<vector>

using namespace std;


vector<int> primeNumber(int num){
    vector<int> v;
    if(num <= 0 || num == 1){
        cout << "not valid input for primeNumber\n";
    }else{
        for(int i=2; i<=num; i++){
            bool isPrime = true;
            for(int j=2; j<=i/2; j++){
                if(i%j==0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                v.push_back(i);
            }
        }
    }
    return v;
}

int main(){
    int n;
    cout << "Enter the number till you want to know prime number : ";
    cin >> n;
    
    vector<int> vec;
    
    vec = primeNumber(n);
    
    for(auto i : vec){
        cout << i <<", ";
    }
    
    return 0;
}
