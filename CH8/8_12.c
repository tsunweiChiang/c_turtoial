#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*function*/
double my_fun(int n)
{
    double num=0.0;
    int i;
    for(i=1;i<=n;i++)
    {
        num+=1.0/pow(2,i);
    }

    return num;
}
/*main*/
int main()
{
    /*a*/
    double a1,a2,a3,a4;
    a1=my_fun(3);
    a2=my_fun(4);
    a3=my_fun(5);
    a4=my_fun(6);
    printf("%lf ,%lf ,%lf ,%lf\n",a1,a2,a3,a4);

    /*b*/
    printf("1\n");

    /*c*/
    int c=0;
    double c1;
    while (1)
    {
        /* code */
        c1=my_fun(c);
        if(c1>0.99999)
            break;
        c++;
    }
    printf("%d",c);

    return 0;
}