#include <iostream>
#include <cmath> // for pow function

using namespace std;

int max_reachable_index(int N, int B) {
	int max_index = 0; // initialize max_index to 0
	for (int i = 0; i < N; i++) { // loop through all indices in the list
		if (i != B) { // skip the index B
			max_index += pow(2, N-i-1); // add 2^(N-i-1) to max_index
		}
	}
	return max_index; // return the calculated max_index
}

int main() {
	int N = 40;
	int B = 10;
	cout << max_reachable_index(N, B) << endl; // output the calculated max_index
	return 0;
}
