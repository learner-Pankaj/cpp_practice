#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> ptr(new int(5));
    
    if(ptr){
        cout << "memory is allocated and the value is " << *ptr<<endl;
    }else{
        cout << "memory allooooocation failed\n";
    }

    return 0;
}
