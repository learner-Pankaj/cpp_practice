#include<stdio.h>

struct person{
    int age;
    float weight;
};

int main(){
    struct person *p1ptr, p1;
    p1ptr = &p1;
    p1ptr->age = 20;
    p1ptr->weight = 67.4;
    
    scanf("%d", &p1ptr->age);
    scanf("%f", &p1ptr->weight);
    
    printf("Age : %d\n", p1.age);
    printf("weight : %.2f", p1.weight);
    return 0;
}
