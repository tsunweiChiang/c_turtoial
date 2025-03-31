#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*functoin*/
double my_fun(double x, int n);
int base(int n);
double power(double x, int n);
/*main*/
int main()
{
    /*a*/
    printf("%lf,%lf\n",my_fun(2.2,3),my_fun(2.2,5));

    /*b*/
    int b=2;
    while (1)
    {
        /* code */
        if(fabs(my_fun(2.2,b)-my_fun(2.2,b-1))<0.0001)
            break;
        b++;
    }
    printf("n= %d",b);

    system("pause");
    return 0;
}

double my_fun(double x,int n)
{
    int i;
    double sum=0.0;
    for(i=1;i<=n;i++)
    {
        sum+=power(x,i)/base(i);

    }

    return sum;
}

int base(int n)
{
    int i,total=1;

    for(i=1;i<=n;i++)
    {
        total*=2*i+1;
    }

    return total;    
}

double power(double x, int n)
{
    double power;
    power=pow(-1,n)*pow(x,2*n-1);
    return power;
}