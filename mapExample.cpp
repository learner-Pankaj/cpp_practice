#include <iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "pankaj";
    m[2] = "yadav";
    m[23] = "kumar";
    m[14] = "verma";
    
    m.insert({11, "singh"});

    for(auto i:m){
        cout << i.first << " :: "<< i.second << endl;
    }
    
    cout << endl;
    auto it = m.find(2);
    cout << "find 2 is there in key :: "<<it->second << endl;

    for(auto i=it; i!=m.end(); i++){
        cout << (*i).first << ":"<<(*i).second << endl;
    }
    
    return 0;
}
