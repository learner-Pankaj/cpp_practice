#include <iostream>
#include <vector>

using namespace std;

int main()
{
    printf("Hello World\n");
    vector<int> v = {1,2,3,4,5};
    
    vector<int>::reverse_iterator itr;
    
    for(itr=v.rbegin(); itr != v.rend(); itr++){
        cout << *itr << ", ";
    }
    cout << endl;
    return 0;
}
