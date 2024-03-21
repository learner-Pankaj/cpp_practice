#include<iostream>
using namespace std;

class A{
    private:
        int time;
    public:
        A(int t=0){
            time = t;
        }
        void printDecrementValue(){
            cout << time << endl;
        }
        //pre-decrement operator
        void operator--(){
            --time;
        }
        void operator--(int){
            time--;
        }
};

int main(){
    A person(23);
    --person;
    person--;
    person.printDecrementValue();
    return 0;
}