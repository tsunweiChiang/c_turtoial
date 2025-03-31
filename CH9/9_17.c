#include <stdlib.h>
#include <stdio.h>
#define SIZE 5
/*function*/
int mi(int arr[]);
/*main*/
int main()
{
    int arr[SIZE]={5,4,3,2,1};
    int min;
    min=mi(arr);
    printf("Min: %d",min);
    return 0;
}

int mi(int arr[])
{
    int min=32768,i;
    for(i=0;i<SIZE;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    return min;
}

