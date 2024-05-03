#include <stdio.h>

void swap(int* n1, int* n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int num1 = 5;
    int num2 = 10;
    
    printf("before swap :: num1 = %d \t num2 = %d\n\n\n", num1, num2);
    
    swap(&num1, &num2);
    
    printf("after swap :: num1 = %d \t num2 = %d\n\n\n", num1, num2);
    
    return 0;
}
