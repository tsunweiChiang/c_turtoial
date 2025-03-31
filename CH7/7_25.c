#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j;

    do
    {
        j=1;
        do
        {
            /* code */
            printf("%d*%d=%d\n",i,j,i*j);
            j++;
        } while (j<=9);
        
        i++;
    }while(i<=9);
}