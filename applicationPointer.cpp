#include<iostream>
using namespace std;

class Car{
    private:
        int wght;
    public:
        void setWeight(int w){
            wght = w;
        }
        int getWeight(){
            return wght;
        }
};

class BMW{
    private:
        int topSpeed;
        Car *ptr;
    public:
        BMW(int w=0, int s=0){
            ptr = new Car();
            topSpeed = s;
            ptr->setWeight(w);
        }
        int getWeight(){
            return ptr->getWeight();
        }
        int getSpeed(){
            return topSpeed;
        }

        ~BMW(){
            delete ptr;
        }
};

int main(){

    BMW b(3000, 350);
    cout << "Weight of the car = " << b.getWeight() << endl;
    cout << "TopSpeed of the car = " << b.getSpeed() << endl;
    return 0;
}