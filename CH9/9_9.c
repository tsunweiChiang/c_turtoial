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

    for(j=0;j<4;j++)
    {
        printf("sum of season %d: %d\n",j+1,sale[0][j]+sale[1][j]);
    }

    return 0;
}