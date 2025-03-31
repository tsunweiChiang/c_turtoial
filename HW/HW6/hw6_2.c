#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int m,n,pow_n;
    bool power=false;

    printf("Please input a pair of inteders (m,n): ");
    scanf_s("%d %d",&m,&n);
    while (1)
    {
        /* code */
        if(n==0)
        {
            printf("Wrong input, input again!\n");
            printf("Please input a pair of inteders (m,n): ");
            scanf_s("%d %d",&m,&n);
        }

        else if(m==0)
        {
            printf("%d is not the power of any number, input again.\n",m);
            printf("Please input a pair of inteders (m,n): ");
            scanf_s("%d %d",&m,&n);
        }

        else
        {
            power=false;
            for (pow_n=n;pow_n<=m;pow_n*=n)
            {
                if(pow_n==m)
                {
                    printf("%d is the power of %d\n",m,n);
                    power=true;
                    break;
                }
                    
            }
            if(power==false)
                printf("%d is not the power of %d\n",m,n);

            printf("Please input a pair of inteders (m,n): ");
            scanf_s("%d %d",&m,&n);
        }

            

            
    }
    
    

    

}