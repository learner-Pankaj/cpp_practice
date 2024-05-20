
#include <iostream>
#include<vector>
using namespace std;

vector<int> compare(vector<int> a, vector<int> b){
    
    int a_count=0;
    int b_count=0;
    int a_size = a.size();
    int b_size = b.size();
    // cout <<"alice size : " << a_size << "\nBob size : "<< b_size << endl;
    for(int i=0; i<a_size; i++){
        if(a[i]>b[i]){
            a_count++;
            
        }else if(a[i]<b[i]){
            b_count++;
        }
    }
    vector<int> result = {a_count, b_count};
    return result;
}


int main()
{
    vector<int> alice = {1,2,3,5};
    vector<int> bob = {3,2,1,4};
    
    vector<int> comp = compare(alice, bob);
    
    for(auto i : comp){
        cout << i << ", ";
    }
    cout << endl;
    return 0;
}
