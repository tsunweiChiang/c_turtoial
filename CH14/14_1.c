#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=(int *)malloc(sizeof(int));
    *ptr=12;
    printf("%d^2: %d",*ptr,*ptr**ptr);
    return 0;
}