#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4][2][3]={{{1,1,1},{1,1,1}},{{1,1,1},{1,1,1}},{{1,1,1},{1,1,1}},{{1,1,1},{1,1,1}}};
    int i,j,k;
    int sum=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                sum+=arr[i][j][k];
            }
        }
    }

    printf("Sum of element: %d",sum);
}