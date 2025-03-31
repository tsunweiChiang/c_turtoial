#include <stdio.h>
#include <stdlib.h>

/*function*/
void count(int *);
/*main*/
int main()
{
    int num=0;
    int *ptr=&num;

    count(ptr);

    return 0;
}

void count(int *ptr)
{
    *ptr+=1;
    printf("%d",*ptr);
}