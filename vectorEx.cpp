#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
    int n, q, num;
    cin >> n;
    vector<int> v(1);
    for(int i=1; i<=n; i++){
        cin >> num;
        v.push_back(num);
    }
    int x;
    cin >> x;
    v.erase(v.begin()+x);
    
    int a, b;
    cin >> a >> b;
    v.erase(v.begin()+a, v.begin()+b);
    
    cout << v.size()-1 << endl;
    
    vector<int>::iterator i = v.begin()+1;
    
    for(i = v.begin()+1; i != v.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
