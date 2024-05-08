
#include <iostream>
using namespace std;

class Person{
    int weight;
    public:
        Person(int x=0){
            weight = x;
        }
        
        friend bool operator > (Person x, Person y);
        friend bool operator < (Person x, Person y);
};

bool operator > (Person x, Person y){
    return x.weight > y.weight;
}

bool operator < (Person x, Person y){
    return x.weight < y.weight;
}


int main()
{
    Person John(8);
    Person Rick(27);
    
    if(John>Rick){
        cout << "John is heavier then Rick\n";
    }else if(Rick > John){
        cout << "Rick is heavier then John\n";
    }

    return 0;
}
