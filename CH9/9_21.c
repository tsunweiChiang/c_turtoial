#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 5

/*function*/
double average(int arr[][COL]);

/*main*/
int main()
{
    int arr[ROW][COL]={{1,2,3,4,5},{1,2,3,4,5},{3,3,3,3,3},{3,3,3,3,3}};

    printf("element average: %lf",average(arr));

    return 0;
}

double average(int arr[][COL])
{
    double sum=0.0;
    int i,j;

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            sum+=arr[i][j];
        }
    }
    sum/=ROW*COL;
    return sum;
}