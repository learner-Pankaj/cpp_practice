#include<stdio.h>

union ujob{
    char name[30];
    int age;
};

struct student{
    char name[30];
    int age;
};


int main(){
    union ujob u1;
    struct student s1;
    printf("Size of union %ld\n",sizeof(u1));
    printf("Size of structure %ld",sizeof(s1));
    return 0;
}
