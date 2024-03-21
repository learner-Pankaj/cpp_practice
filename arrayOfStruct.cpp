#include<iostream>
#include<string>

using namespace std;

struct student{
    int roll_Number;
    string name;
    int percentage;
};

int main(){
    student stu[3];
    cout << "Enter Student details" << endl;
    for(int i=0;i<3;i++){
        cout << "Student : " << (i+1) << endl;
        cout << "Name : ";
        cin >> stu[i].name;
        cout << "Roll Number : ";
        cin >> stu[i].roll_Number;
        cout << "Percentage : ";
        cin >> stu[i].percentage;
    }

    cout << "\n Student Details \n" << endl;

    for(int i=0; i<3; i++){
        cout << "Roll Num : " << stu[i].roll_Number << endl;
        cout << "Name : " << stu[i].name << endl;
        cout << "Percentage : " << stu[i].percentage << endl;
        cout << endl;
    }
    return 0;
}