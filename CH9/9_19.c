#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/*function*/
void square(int arr[]);
/*main*/
int main()
{
    int arr[5]={1,2,3,4,5};
    square(arr);
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void square(int arr[])
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        arr[i]*=arr[i];
    }
}