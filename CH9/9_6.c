#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={3,5,0,3,2,4,1,6,8,5,4,3,2};
    int i;

    /*a*/
    int a=sizeof(arr)/4;
    printf("arr[] have %d elements\n",a);

    /*b*/
    int b=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]>=3 && arr[i]<=6)
            b++;
    }
    printf("have %d number between 3~6",b);

    return 0;

}