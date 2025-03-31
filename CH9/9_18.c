#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/*function*/
int mi(int arr[]);
/*mian */
int main()
{
    int arr[SIZE]={5,6,8,1,3};
    
    printf("Min: %d",mi(arr));

    return(0);
}

int mi(int arr[])
{
    int index=0,i,min=32768;

    for(i=0;i<SIZE;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            index=i;
        }
    }
    
    return index+1;
}