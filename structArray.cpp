#include<iostream>
#include<string>
using namespace std;

struct Employee{
    int empId;
    char name[20];
    int age;
    double salary;
};

int main(){
    
    struct Employee emp[3] = {{1,"Pankaj Yadav", 26, 70000.5},{2,"Pankaj Yadav", 26, 70000.5},{3,"Pankaj Yadav", 26, 70000.5}};
    
    for(int i=0; i<3; i++){
        cout << "Enter Employee ID : " << emp[i].empId<< endl;
        cout << "Enter Employee Name : "<< emp[i].name<<endl;
        cout << "Enter Employee age : "<< emp[i].age<<endl;
        cout << "Enter Employee salary : "<< emp[i].salary<<endl;
        cout << "\n\n";
    }
    
    
}
