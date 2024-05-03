#include <stdio.h>

int main()
{
    int x[3];
    for(int i=0; i<3; i++){
        printf("x[%d] = %p\n", i, &x[i]);
    }
    
    printf("array 1st element address = %p\n", x);

    return 0;
}
