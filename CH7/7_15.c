#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num=1,sum=0;
    int i=2;
    do
    {
        /* code */
        printf("Enter a even number: ");
        scanf_s("%d",&num);
    } while (num%2!=0 || num<=0);

    do
    {
        /* code */
        sum+=i;
        i+=2;
    } while (i<=num);
    
    printf("Sum: %d",sum);

    return 0;
}