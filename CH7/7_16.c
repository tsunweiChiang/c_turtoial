#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,sum=0;

    do
    {
        /* code */
        sum+=i;
        i+=1;
    } while (sum<=1000);
    
    printf("%d",i-1);
}