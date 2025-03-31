#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *);

int main()
{
    int arr[5]={6,5,2,1,3};

    bubble_sort(arr);
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
}

void bubble_sort(int *arr)
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}