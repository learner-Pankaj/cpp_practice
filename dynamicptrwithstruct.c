#include<stdio.h>
#include<stdlib.h>
struct person{
    int age;
    float weight;
    char name[30];
};

int main(){
    struct person *p1;
    int n;
    printf("Enter the number of person :: ");
    scanf("%d", &n);
    p1 = (struct person*) malloc(n*sizeof(struct person));
    for(int i=0; i<n; i++){
        scanf("%d%f%s",&(p1+i)->age, &(p1+i)->weight, (p1+i)-> name);
    }

    (p1+i)-> name
    for(int i=0; i<n; i++){
        printf("%d\n%f\n%s", p1->age, p1->weight, p1->name);
    }
}
