#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sale[2][4],sum=0;

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%dth person %dth season:",i+1,j+1);
            scanf_s("%d",&sale[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            sum+=sale[i][j];
        }
        printf("sum of %dth sale: %d\n",i+1,sum);
    }

    return 0;
}