#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,k=0;
     
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }

    return 0;
}