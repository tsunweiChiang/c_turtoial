#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int i=1;
    add:
        if (i%2!=0 )
        {
            sum+=i;
        }
        i++;
        if(i<=100) 
            goto add;

    printf("sum: %d",sum);

    return 0;
}