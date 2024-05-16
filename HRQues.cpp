#include<iostream>
#include<vector>
#include<string>
using namespace std;


vector<string> possibleChanges(vector<string> usernames) {
    vector<string> result;

    for (const string& original : usernames) {
        string newUsername = original;
        bool changed = false;

        for (int i = 0; i < original.length(); ++i) {
            if (original[i] > 'a') {
                newUsername[i] = original[i] - 1;
                changed = true;
                break;
            }
        }

        // If no character was changed, add "no answer"
        if (!changed) {
            result.push_back("NO");
        } else {
            result.push_back("YES");
        }
    }

    return result;
}

int main(){
    int n;
    cout << "Enter in number, how many names want to store.\n\n";
    cin >> n;
    cout << "Enter Name \n";
    
    vector<string> str(n);
    
    for(int i=0; i<n; i++){
        string s;
        getline(cin, s);
        str[i]=s;
    }
    
    vector<string> result = possibleChanges(str);
    
    for(auto i : result){
        cout << i << endl;
    }
    return 0;
    
}
