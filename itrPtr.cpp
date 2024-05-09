#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec = {34,67,97,35,68};
    vec.push_back(28);
    
   vector<int>::iterator i;
    
    vec.insert(vec.begin(), 7);
    
    for( i=vec.begin(); i!=vec.end(); i++){
        cout << *i << endl;
    }
    

    return 0;
}
