#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2

/*function*/
void add(int a[][COL],int b[][COL],int c[][COL]);

/*main*/
int main()
{
    int a[ROW][COL]={{1,1},{1,1}};
    int b[ROW][COL]={{2,2},{2,2}};
    int c[ROW][COL];
    int i,j;

    add(a,b,c);

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

void add(int a[][COL],int b[][COL],int c[][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}