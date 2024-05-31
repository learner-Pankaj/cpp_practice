#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    
    int Q;
    cin >> Q;
    vector<int> queries(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> queries[i];
    }
    
    for (int i = 0; i < Q; ++i) {
        int Y = queries[i];
        auto it = lower_bound(arr.begin(), arr.end(), Y);
        if (it != arr.end() && *it == Y) {
            cout << "Yes " << distance(arr.begin(), it) + 1 << endl;
        } else {
            cout << "No " << distance(arr.begin(), it) + 1 << endl;
        }
    }
    
    return 0;
}
