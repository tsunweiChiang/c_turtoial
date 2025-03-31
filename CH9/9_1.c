#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
        arr[i]=i+1;
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);

    return 0;

}