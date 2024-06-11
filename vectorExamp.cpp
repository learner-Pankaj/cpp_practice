#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T, N;
    cin >> T;
    
    while(T--){
        cin >> N;
        vector<int> number(N);
        for(int i=0; i<N; i++){
            cin >> number[i];
        }
        
        if(N%2!=0 && N%3==0){
            cout << number[N/2]<<endl;;
        }
        else if(N%2==0 && N%3==0){
            cout << number.front() << " " << number.back() << endl;
        }
        else{
            cout << number.front()+number.back() << endl;
        }
    }
}
