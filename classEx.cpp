#include<iostream>
using namespace std;

void setData(int l, int b);
int getArea();
int getPerimeter();

class Rectangle{
    private :  
        int length;
        int breadth;
    public:
        void setData(int l, int b){
            length = l;
            breadth = b;
        }
        
        int getArea(){
           return length*breadth; 
        }
        
        int getPerimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle rec;
    int l, b;
    cout << "Enter length and breadth of the rectangle\n";
    cin >> l >> b;
    rec.setData(l, b);
    int area = rec.getArea();
    int perimeter = rec.getPerimeter();
    
    cout << "Area of the rectangle : " << area << endl;
    cout << "Perimeter of the rectangle : " << perimeter << endl;
    
    return 0;
    
}
