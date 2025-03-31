#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={34,76,33,42,76};
    int i;

    for(i=0;i<5;i++)
    {
        *(arr+i)+=10;
        printf("%d ",*(arr+i));
    }

    return 0;
}