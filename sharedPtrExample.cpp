
#include <iostream>
#include<memory>
using namespace std;
class Rectangle{
    private : 
        int length;
        int breadth;
    public:
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        int area(){
            return length*breadth;
        }
};

int main()
{
    
    shared_ptr<Rectangle> p1(new Rectangle(2, 6));
    cout << p1-> area() << endl;
    
    shared_ptr<Rectangle>p2 = p1;
    cout << p2-> area() << endl;
    
    cout << p1.use_count() << endl;
    return 0;
}
