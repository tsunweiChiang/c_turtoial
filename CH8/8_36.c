#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

/*main*/
int main()
{
    /*a*/
    int a;

    printf("Enter a number: ");
    scanf_s("%d",&a);
    printf("square of %d is: %d\ncubic of %d is: %d\nabs of %d is: %d\n",a,SQUARE(a),a,CUBIC(a),a,ABS(a));

    /*b*/
    double b1,b2;
    printf("Enter two float number: ");
    scanf_s("%lf,%lf",&b1,&b2);
    printf("avreage of %lf and %lf is: %lf\nproduct of %lf and %lf is: %lf\n",b1,b2,AVERAGE(b1,b2),b1,b2,PRODUCT(b1,b2));
    return 0;
}