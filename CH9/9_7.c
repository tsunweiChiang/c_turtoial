#include <stdio.h>
#include <stdlib.h>

int main()
{
    double arr[5],aver=0.0;
    int i;

    for(i=0;i<5;i++)
        scanf_s("%lf",&arr[i]);
    for(i=0;i<5;i++)
        aver+=arr[i];
    aver/=5.0;
    printf("%lf",aver);

    return 0;
}