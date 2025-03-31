#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int sum=0;

    printf("Input odd number: ");
    scanf_s("%d",&num);

    for(i=1;i<=num;i+=2)
    {
        sum+=i;
    }

    printf("Sum of odd: %d",sum);

    return 0;
}