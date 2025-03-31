#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,prime=0;
    int i=0,j=0;

    printf("Enter a number: ");
    scanf_s("%d",&num);

 
    for(prime=num+1;prime<6*num;prime++)
    {
        for(j=2;j<=prime;j++)
        {
            if (j==prime)
            {
                if(i>=5)
                    break;
                printf("%d ",prime);
                i++;
            }
            else if ( prime% j==0)
            {
                break;
            }
        }
    }
    
    return 0;
}