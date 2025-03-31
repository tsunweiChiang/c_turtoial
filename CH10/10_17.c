#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={52,46,4616,49494,66};
    int i,max=arr[0],min=arr[0],min_i=0,max_i=0;

    for(i=0;i<5;i++)
    {
        if(*(arr+i)>max)
        {
            max=*(arr+i);
            max_i=i;
        }
            
        if(*(arr+i)<min)
        {
            min=*(arr+i);
            min_i=i;
        }
            
    }

    printf("%d,%d",min_i,max_i);
}