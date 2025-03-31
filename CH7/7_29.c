#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i=0;

    printf("Eneter a number: ");
    scanf_s("%d",&num);

    for(i=2;i<=num;i++)
    {
        
        if(i==num)
        {
            printf("%d is prime\n",num);
        }

        else if(num%i==0)
        {
            printf("%d not prime\n",num);
            break;
        }

        
    }

    return 0;
}