#include <stdio.h>
#include <stdlib.h>

/*function*/
void square(int *);

/*main*/
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptrarr=a;
    int i;
    square(ptrarr);
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}

void square(int *arr)
{
    int i;
    for(i=0;i<5;i++)
    {
        *(arr+i)*=*(arr+i);
    }
}