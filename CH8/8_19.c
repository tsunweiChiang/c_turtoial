#include <stdio.h>
#include <stdlib.h>

/*function*/
double rpower(double b, int n);
/*main*/
int main()
{
    double base,ans;
    int power;

    printf("Input the base and power:");
    scanf_s("%lf,%d",&base,&power);

    ans=rpower(base,power);

    printf("Ans: %lf",ans);

    system("pause");
    return 0;
}

double rpower(double b, int n)
{
    if (n==0)
        return 1.0;
    else
        return b*rpower(b,n-1);
}
