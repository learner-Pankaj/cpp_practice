#include<iostream>
using namespace std;

class check{
    private:
        int i;
    public:
        check():i(0){        }
        //postfix
        void operator ++(int){  //prefix ;- void operator ++()
            ++i;
        }
        void display(){
            cout << i << endl;
        }
};

int main(){
    check obj;
    obj.display();
    
    obj++;
    
    obj.display();
    
    return 0;
}
