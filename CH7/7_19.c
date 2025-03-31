#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,sum=0;

    for (i=1;sum<=1000;i++)
    {
        sum+=i;
    }
    
    printf("%d",i-1);
}