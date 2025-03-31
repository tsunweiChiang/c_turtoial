#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*f(x)*/
double f(double x)
{
    double ans;
    
    ans=3*pow(x,3)+2*x-1;

    return ans;
}
/*main*/
int main()
{
    double num,ans;

    printf("Input the float number: ");
    scanf_s("%lf",&num);

    ans=f(num);

    printf("Ans: %lf",ans);

    return 0;
}