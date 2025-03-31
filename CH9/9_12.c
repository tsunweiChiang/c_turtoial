#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 3
#define MAX 32768
#define MIN -32767

int main()
{
    int i,j,max=MIN,min=MAX;
    int arr[ROW][COL]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(arr[i][j]>max)
                max=arr[i][j];
            if(arr[i][j]<min)
                min=arr[i][j];
        }
    }

    printf("Max: %d\nMin: %d",max,min);

    return 0;

}