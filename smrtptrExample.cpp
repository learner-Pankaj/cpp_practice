/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<memory>
using namespace std;

class A{
    int x;
    public:
        A(int a){
            x=a;
        }
        int getX(){
            return x;
        }
        ~A(){
            cout << "destructor called\n";
        }
};
int main()
{
    // A *a = new A(10);
    // cout << a->getX() << endl;
    // delete a;    //we have to delete object 
    std::shared_ptr<A> a1(new A(1));
    cout << a1->getX() << endl;
    
    std::shared_ptr<A> a2 = a1;
    cout << a2->getX() << endl;
    
    //here object will get delete when it goes out of scope
    return 0;
}
