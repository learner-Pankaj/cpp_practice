#include<iostream>
using namespace std;

class Test{
    private:
        int data;
    public:
        void setData(int set){
            data = set;
        }
        int getData(){
            return data;
        }
};

int main(){
    Test *t2;
    t2 = new Test;
    t2->setData(10);
    cout << t2->getData() << endl;
    return 0;
}