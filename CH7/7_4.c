#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;

    printf("Input a number: ");
    scanf_s("%d",&num);

    printf("Factor of %d: ",num);

    for(i=1;i<=num;i++)
    {
        if(num%i ==0)
            printf("%d ",i);
    }

    return 0;
}