#include <stdio.h>
#include <stdlib.h>

int main()
{
    double average=0.0;
    int i;
    for(i=0;i<3;i++)
    {
        double *ptr=(double *)malloc(sizeof(double));
        scanf_s("%lf",ptr);
        average+=*ptr;
        free(ptr);
    }
    printf("average: %lf",average/3.0);
}