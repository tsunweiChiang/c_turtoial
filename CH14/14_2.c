#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *ptr,*i;
    i=(int *)malloc(sizeof(int));
    ptr=(int *)malloc(3*sizeof(int));
    *ptr=12;
    *(ptr+1)=35;
    *(ptr+2)=140;
    for((*i)=0;(*i)<3;(*i)++)
    {
        printf("*ptr+%d=%d\n",*i,*(ptr+(*i)));
    }
    free(ptr);
    free(i);
    return 0;
}