#include <stdio.h>
#include <stdlib.h>

/*function*/
double my_fun(int n)
{
    double ans=0.0;
    int i,j;

    for(i=1;i<=n;i++)
    {
        double num=1.0;
        for(j=1;j<=i;j++)
        {
            num*=j;
        }

        ans+=1.0/num;
    }
    

    return ans;
}
/*main*/
int main()
{
    /*a*/
    double a1,a2,a3;
    a1=my_fun(5);
    a2=my_fun(8);
    a3=my_fun(10);

    printf("%lf,%lf,%lf\n",a1,a2,a3);

    /*b*/
    int b=2;
    while (1)
    {
        /* code */
        if(my_fun(b)-my_fun(b-1)<0.00001)
            break;
        b++;
    }

    printf("n= %d",b);
    
    return 0;
}