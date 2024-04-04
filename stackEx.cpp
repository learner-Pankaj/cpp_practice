#include<iostream>
using namespace std;
#define SIZE 50

class stack{
    int stackArray[SIZE];
    int tos;
    public : 
        stack(){
            tos = 0;
        }
        void push(int);
        int pop();
        void set(int);

};

void stack::push(int value){
    if(tos<SIZE){
        stackArray[tos++] = value;
    }else{
        cout << "stack is full" << endl;
    }
}
int stack::pop(){
    if(tos==0){
        cout << "stack is empty" << endl;
    }else{
        return stackArray[--tos];
    }
}
void stack::set(int a){
    tos = a;
}

int main(){
    stack s;
    for(int i=0; i<SIZE; i++){
        s.push(i);
    }
    for(int i=0; i<SIZE; i++){
        cout << "Deleted element : " << s.pop() << i;
    }
}