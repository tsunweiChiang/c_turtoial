#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *ptr=(double *)malloc(3*sizeof(double)),average=0.0;
    int i;
    for(i=0;i<3;i++)
    {
        scanf_s("%lf",(ptr+i));
        average+=*(ptr+i);
    }
    printf("average: %lf",average/3.0);
}