#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3];
    int i;

    for(i=0;i<3;i++)
        scanf_s("%d",&arr[i]);
    for(i=0;i<3;i++)
        printf("%d ",arr[i]);
}