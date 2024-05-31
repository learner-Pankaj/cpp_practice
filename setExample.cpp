#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int q;
    cin >> q;
    
    for(int i=0; i<q; i++){
        int x, y;
        cin >> x >> y;
        if(x==1){
            s.insert(y);
        } else if(x==2){
            if(!s.empty()){
                s.erase(y);
            }
        }else if(x==3){
            auto itr = s.find(y);
            if(*itr==y){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}
