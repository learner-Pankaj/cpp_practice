#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int Q;
    cin >> Q;
    
    unordered_map<string, int> student_marks;
    
    for (int i = 0; i < Q; ++i) {
        int type;
        string name;
        cin >> type >> name;
        
        if (type == 1) {
            int marks;
            cin >> marks;
            student_marks[name] += marks;
        } else if (type == 2) {
            student_marks[name] = 0;
        } else if (type == 3) {
            cout << student_marks[name] << endl;
        }
    }
    
    return 0;
}
