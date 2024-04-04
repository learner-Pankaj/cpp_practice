#include<iostream>
#include<string>
using namespace std;

struct camera{
    int rear;
    int front;
};

struct phone{
    string name;
    int RAM;
    int ROM;
    string processor;
    camera camera;
    double price;
};

int main(){
    phone mi;
    mi.name = "Redmi13";
    mi.RAM = 8;
    mi.ROM = 256;
    mi.processor = "Qualcomm";
    mi.camera.rear = 50;
    mi.camera.front = 16;
    mi.price = 16000;

    cout << "Name : " << mi.name << endl;
    cout << "RAM : " << mi.RAM << endl;
    cout << "ROM : " << mi.ROM << endl;
    cout << "processor : " << mi.processor << endl;
    cout << "Rear camera : " << mi.camera.rear << endl;
    cout << "Front camera : " << mi.camera.front << endl;
    cout << "price : " << mi.price << endl;
}