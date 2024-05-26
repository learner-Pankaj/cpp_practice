
#include <iostream>
using namespace std;

struct distance{
    int feet;
    float inch;
};

int main()
{
    struct distance d1, d2; 
    cout << "Enter d1 Feet : ";
    cin >> d1.feet;
    
    cout << "Enter d1 inch : ";
    cin >> d1.inch;
    
    cout << "Enter d2 Feet : ";
    cin >> d2.feet;
    
    cout << "Enter d2 inch : ";
    cin >> d2.inch;
    
    
    struct distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    
    if(sum.inch >=12){
        sum.feet++;
        sum.inch -= 12;
    }
    
    cout << "Feet = " << sum.feet << ", Inches = " << sum.inch << endl;
    
    return 0;
}
