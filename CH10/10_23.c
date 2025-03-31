#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 3

int main()
{
    int A[ROW][COL]={{1,2,3},{5,6,8}};
    int B[ROW][COL]={{1,2,3},{5,6,8}};
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",(*(*(A+i)+j))+(*(*(B+i)+j)));
        }
        printf("\n");
    }

    return 0;
}