#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int s,j;
    while(i<=3)
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
    }
    
}