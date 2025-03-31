#include <stdio.h>
#include <stdlib.h>
#define MAX 32768
#define MIN -32767
int main()
{
    int arr[10]={1,5,6,-15,46,64,-100,54,62,-20};
    int max=MIN,min=MAX,i;

    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }

    printf("Max: %d\nMin: %d",max,min);

    return 0;

}