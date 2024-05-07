#include<iostream>
#include<cstdlib>
#include<thread>
#include<mutex>
using namespace std;

int sum = 0;
mutex mtx;

void addRandom(){
    mtx.lock();
    cout << "thread 1\n";
    int random = rand();
    sum += random;
    cout <<"Random :: " << random << ", sum :: "<<sum << endl;
    mtx.unlock();
}

void subRandom(){
    mtx.lock();
    cout << "\nthread 2\n";
    int random = rand();
    cout <<"Random :: " << random << endl;
    random -= sum;
    cout << ", sum :: "<<sum << endl;
    cout <<"Random Result:: " << random << endl;
    mtx.unlock();
}

int main(){
    thread th1(addRandom);
    thread th2(subRandom);
    th1.join();
    th2.join();
    return 0;
}
