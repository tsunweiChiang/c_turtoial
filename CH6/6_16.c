#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;

    printf("Input three number:");
    scanf_s("%lf,%lf,%lf",&a,&b,&c);

    if (pow(b,2)-4*a*c>0)
    {
        printf("x=%lf and %lf",(-1*b+sqrt(pow(b,2)-4*a*c))/(2*a),(-1*b-sqrt(pow(b,2)-4*a*c))/(2*a));
    }
    else if (pow(b,2)-4*a*c==0)
    {
        printf("x=%lf",(-1*b)/(2*a));
    }
    else if (pow(b,2)-4*a*c<0)
    {
        printf("No x");
    }

    return 0;
}