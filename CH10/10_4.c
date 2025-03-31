#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num=12.6f,*ptr;

    ptr=&num;

    printf("num address: %p\nptr address: %p",ptr,&ptr);

    return 0;
}