#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 3

int main()
{
    int i,j;
    int A[ROW][COL]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int B[ROW][COL]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    
    printf("Sum of A+B:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }

    return 0;
}