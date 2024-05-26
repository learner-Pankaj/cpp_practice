
#include <iostream>
using namespace std;

struct student{
    int roll_no;
    string name;
    float marks;
}s1;

int main()
{
    cout << "Enter Name : ";
    getline(cin, s1.name);
    
    cout << "Enter roll number : ";
    cin >> s1.roll_no;
    
    cout << "Enter Marks : ";
    cin >> s1.marks;
    
    cout << " \nShowing Details of the student\n\n";
    cout << "Name : " << s1.name << endl;
    cout << "Roll number : " << s1.roll_no << endl;
    cout << "Marks : " << s1.marks << endl;

    return 0;
}
