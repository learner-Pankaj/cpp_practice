

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx;

void printMethodOne(int n){
    mtx.lock();
    for(int i=0; i<n; i++){
        cout << "Printing from method 1 -"<<i << " times\n";
    }
    cout << "\n\n";
    mtx.unlock();
}

void printMethodTwo(int n){
    mtx.lock();
    for(int i=0; i<n; i++){
        cout << "Printing from method 2 -"<<i << " times\n";
    }
    cout << "\n\n";
    mtx.unlock();
}

void printMethodThree(int n){
    mtx.lock();
    for(int i=0; i<n; i++){
        cout << "Printing from method 3 -"<<i << " times\n";
    }
    mtx.unlock();
}

int main(){
    thread th1(printMethodOne, 10);
    thread th2(printMethodTwo, 50);
    thread th3(printMethodThree, 70);
    
    th1.join();
    th2.join();
    th3.join();
    return 0;
}
