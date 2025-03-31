#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data
{
    /* data */
    char name[10];
    int math;
};

void add5(struct data *d)
{
    d->math+=5;
};

int main()
{
    struct data da,*p;
    strcpy(da.name,"david");
    da.math=95;
    p=&da;
    add5(p);
    printf("%s`s math: %d",p->name,p->math);
    
}