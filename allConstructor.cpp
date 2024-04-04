#include<iostream>
#include<string>

using namespace std;

class student{
    private:
        string name;
        int roll_no;
        int standard;

    public:
        student(){
            name = "default_constructor";
            roll_no = 0;
            standard = 11;
        }

        student(string name_a, int roll_no_a, int standard_a){
            name = name_a;
            roll_no = roll_no_a;
            standard = standard_a;
        }

        student(student &stu){
            name = stu.name;
            roll_no = stu.roll_no;
            standard = stu.standard;
        }

        void getDetails();
};

void student::getDetails(){
    cout << "Name : " << name << endl;
    cout << "Roll Num : " << roll_no << endl;
    cout << "Standard : " << standard << endl;
}

int main(){
    student st;
    student st1("Pankaj", 87, 12);
    student st2(st1);

    st.getDetails();
    st1.getDetails();
    st2.getDetails();

    return 0;
}