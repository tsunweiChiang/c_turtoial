#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int s,j;
    do
    {
        printf("\n");
        /* code */
        do
        {
            scanf_s("%d",&s);
        }while(s>50);
        
        for(j=1;j<=s;j++)
            printf("*");
        i+=1;
    } while (i<=3);
    
}