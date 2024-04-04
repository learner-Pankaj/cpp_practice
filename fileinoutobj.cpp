#include<iostream>
#include<fstream>
using namespace std;

class student{
    private:
        char name[20];
        int age;
    public:
        void getData(){
            cout << "Enter Name : ";
            cin.getline(name, 20);
            cout << "Enter age : ";
            cin >> age;
        }
        void showData(){
            cout << "Name : " << name << "\nAge : "<< age << endl;
        }
};

int main(){
    student s;
    ofstream file;      //write

    //open file in write mode
    file.open("data.txt", ios::out);

    if(!file){
        cout << "Error in file creation\n";
        return 0;
    }
    cout << "\nFile created successfully." <<endl;

    //write into file
    s.getData();    //take data from user

    //(char*)&s is used to point at the start of an object and sizeof() calculate the size in number of bytes
    file.write((char*)&s, sizeof(s));
    

    //open file into input and read mode
    ifstream file1;
    file1.open("data.txt", ios::in);
    if(!file1){
        cout << "Error in file opening\n";
        return 0;
    }
    cout << "\nFile opened successfully." <<endl;
    file1.read((char*)&s, sizeof(s));

    //display the data on console
    s.showData();

    file1.close();
    return 0;
}