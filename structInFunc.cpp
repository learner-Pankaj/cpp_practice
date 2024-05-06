
#include <iostream>
#include<string>
using namespace std;

struct person{
    string name;
    int age;
    float weight;
};

void getData(person& p);

int main() {
    struct person p1;
    p1.name = "Pankaj Yadav";
    p1.age = 26;
    p1.weight = 67.40;
    cout << "Calling getData\n";
    getData(p1);
    return 0;
}

void getData(person& p){
    cout << p.name << endl;
    cout << p.age << endl;
    cout << p.weight << endl;
}

