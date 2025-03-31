#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;
    double sum=0;

    printf("Input a number: ");
    scanf_s("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum+=(double)1.0/i;
    }

    printf("Sum: %lf",sum);

    return 0;
}