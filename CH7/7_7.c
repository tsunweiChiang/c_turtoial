#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    int sum=0;

    for(i=1;i<=50;i++)
    {
        if(i%2==0)
            sum-=pow(i,2);
        else
            sum+=pow(i,2);
    }

    printf("Sum: %d",sum);
}