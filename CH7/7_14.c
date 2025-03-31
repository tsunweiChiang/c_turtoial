#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=1,sum=0;

    while (i<=10)
    {
        /* code */
        printf("%d pow is %d\n" ,i,(int)pow(i,2));
        sum+=(int)pow(i,2);
        i+=1;
    }

    printf("Sum : %d",sum);

    
}