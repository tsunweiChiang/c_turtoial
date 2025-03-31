#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*function*/
double my_fun(double x, int n)
{
    double ans=0.0;
    double pow,num;
    int i,j;
    for(i=1;i<=n;i++)
    {
        
        pow=1.0;
        num=1.0;

        for(j=1;j<=i;j++)
        {
            pow*=x;
            num*=j;
        }
        ans+=pow/num;
    }

    return ans;

}
/*main*/
int main()
{
    /*a*/
    double a1,a2,a3;
    a1=my_fun(0.1,5);
    a2=my_fun(0.1,8);
    a3=my_fun(0.2,8);

    printf("%f,%f,%f\n",a1,a2,a3);

    /*b*/
    int b=1;
    while (1)
    {
        /* code */
        if(fabs(my_fun(0.1,b)-my_fun(0.1,b-1))<0.00001)
            break;
        b++;
    }

    printf("n= %d\n",b);
    

    system("pause");
    return 0;
}