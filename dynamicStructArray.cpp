
#include <stdio.h>
#define MAX_SIZE 100

struct arr{
    int data;
};

int pushData(struct arr a[], int *size, int data){
    if(*size<0 || *size > MAX_SIZE){
        printf("Size of array is out of scope");
        return 0;
    }
    
    a[*size].data = data;
    (*size)++;
    return 1;
}

int removeData(struct arr a[], int *size, int index){
    if(*size < 0 || *size > MAX_SIZE){
        printf("wrong size");
        return 0;
    }
    printf("Removing element ::  %d\n", a[index].data);
    for(int i=index; i<*size-1; i++){
        a[i]=a[i+1];
    }
    (*size)--;
    return 1;
}

int main()
{
    int n=0;    //current size of array
    
    struct arr a[MAX_SIZE];
    
    pushData(a, &n, 10);
    pushData(a, &n, 20);
    pushData(a, &n, 30);
    
    printf("Removing element from the array by index.\n");
    removeData(a, &n, 2);
    printf("\nEntered element of array\n\n");
    for(int i=0; i<n; i++){
        printf("Enter element in the structure array : %d\n", a[i].data);
    }
    return 0;
}
