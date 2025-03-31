#include <stdio.h>
#include <stdlib.h>

/*function*/
double Elure(int n);
int is_prime(int n);
int even(int n);
/*main*/
int main()
{
    printf("Elure(10) is: %lf\n",Elure(10));
    printf("Elure(100) is: %lf\n",Elure(100));
    printf("Elure(1000) is: %lf\n",Elure(1000));
    printf("Elure(10000) is: %lf\n",Elure(10000));

    system("pause");
    return 0;
}

double Elure(int n)
{
    double ans=1.0;
    int i;
    int prime=3;
    for(i=1;i<=n;i++)
    {
        while(1)
        {
            if(is_prime(prime))
                break;
            else
                prime+=2;     
        }
        printf("%d/%d ",prime,even(prime));
        ans*=(double)prime/even(prime);

        prime+=2;
    }

    return ans;
}

int is_prime(int n)
{
    int j;

    for(j=2;j<=n;j++)
    {
        if(j==n)
            return 1;
        else if (n%j==0)
        {
            /* code */
            return 0;
            break;
        }
        
    }
}

int even(int n)
{
    int num;
    if((n-1)%4==0)
        num=n+1;
    else
        num=n-1;
    
    return num;
}