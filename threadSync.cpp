#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;

mutex mtx;
condition_variable cv;
bool isOddPrinted = true;

void printEven() {
    for (int i = 2; i <= 100; i += 2) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] { return !isOddPrinted; }); 
        cout << i << endl;
        isOddPrinted = true; 
        cv.notify_one(); 
    }
}

void printOdd() {
    for (int i = 1; i <= 99; i += 2) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] { return isOddPrinted; }); 
        cout << i << endl;
        isOddPrinted = false; 
        cv.notify_one(); 
    }
}

int main() {
    thread th1(printOdd);
    thread th2(printEven);
    
    th1.join();
    th2.join();
    return 0;
}
