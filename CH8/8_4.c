#include <stdio.h>
#include <stdlib.h>

/*square*/
double square(double x)
{
    x*=x;

    return x;
}

/*main*/
int main()
{
    double base,num;
    
    scanf_s("%lf",&base);

    num=square(base);

    printf("%lf",num);

    return 0;
}