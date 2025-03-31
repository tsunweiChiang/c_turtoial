#include <stdio.h>
#include <stdlib.h>
/*finction*/
void add10(int *,int *);
/*main*/
int main()
{
    int a=3,b=5;
    int *ptra=&a,*ptrb=&b;

    add10(ptra,ptrb);

    printf("a: %d,b: %d",a,b);

    return 0;
}

void add10(int *ptr1, int *ptr2)
{
    *ptr1+=10;
    *ptr2+=10;
}