#include<iostream>
#include<thread>
#include<ctime>

using namespace std;

void threadfun(int start, int end){
    for(int i=start; i < end; i++){
        cout << "Hello\n";
    }
    cout << endl;
}

void threadfun1(int start, int end){
    for(int i=start; i < end; i++){
        cout << "Hi\n";
    }
    cout << endl;
}

int main(){
    
    clock_t start , end;
    start = clock();

    //simple function call
    // threadfun(0, 20000);
    // threadfun1(20001, 40000);

    //using thread function for the same operation
    thread functest(threadfun, 0, 20000);
    thread functest1(threadfun, 20001, 40000);

    functest1.join();
    functest1.join();

    end = clock();

    double totaltime = (end - start)/CLOCKS_PER_SEC;

    cout << "Total time taken : "<< totaltime << endl;
    cout << "clock timing : "<<CLOCKS_PER_SEC << endl;

    return 0;
}

// C:\\MinGW\\bin\\gcc.exe