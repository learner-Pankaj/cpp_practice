#include<stdio.h>

struct student{
    char name[30];
    int age;
};

struct student getInfo();

int main(){
    printf("testing structure with function\n");
    struct student s;
    s = getInfo();
    printf("%s :: %d", s.name, s.age);
    return 0;
}

struct student getInfo(){
    struct student s1;
    printf("Enter the details\n");
    scanf("%[^\n]%*c", s1.name);
    printf("Enter age ");
    scanf("%d", &s1.age);
    return s1;
}
