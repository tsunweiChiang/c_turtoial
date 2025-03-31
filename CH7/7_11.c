#include <stdio.h>
#include <stdlib.h>

int main()
{
    int even=1,sum=0;
    int i=2;
    while(even%2!=0 || even<=0)
    {
        printf("Enter a even number: ");
        scanf_s("%d",&even);
    }

    while(i<=even)
    {
        sum+=i;
        i+=2;
    }

    printf("Sum: %d",sum);

    return 0;
}