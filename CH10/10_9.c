#include <stdio.h>
#include <stdlib.h>

/*function*/
void address(float *);
/*main*/
int main()
{
    float pi=3.14f;
    float *ptr=&pi;

    address(&pi);
    address(ptr);

    return 0;
}

void address(float *ptr)
{
    printf ("Address: %p,value: %f\n",ptr,*ptr);
}