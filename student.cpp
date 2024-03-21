#include<iostream>
#include<string>

using namespace std;

struct student{
    int roll_Number;
    string name;
    int marks;
};

int main(){
    student stu;
    cout << "Enter Student details" << endl;
    
    cout << "Name : ";
    cin >> stu.name;
    cout << "Roll Number : ";
    cin >> stu.roll_Number;
    cout << "Marks : ";
    cin >> stu.marks;

    cout << "\n Student Details \n" << endl;

    cout << "Roll Num : " << stu.roll_Number << endl;
    cout << "Name : " << stu.name << endl;
    cout << "Marks : " << stu.marks << endl;
    return 0;
}