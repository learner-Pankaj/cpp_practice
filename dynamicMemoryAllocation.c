#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, n;
    int sum=0;
    printf("Enter the size of array.\n");
    scanf("%d", &n); //5
    
    ptr = (int*)malloc(n*sizeof(int));
    
    printf("Enter the element of the array\n");
    
    for(int i=0; i<n; i++){
        scanf("%d",(ptr+i));
    }
    
    printf("Entered element of the array\n");
    for(int i=0; i<n; i++){
        sum += *(ptr+i);
        printf("%d",*(ptr+i));
    }
    
    printf("\nSum of %d element in the array :: %d\n", n, sum);

    free(ptr);

    return 0;
}
