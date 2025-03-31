#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,h,t,d;

    for(i=100;i<=999;i++)
    {
        h=i/100;
        t=(i%100)/10;
        d=i%10;

        if (pow(h,3)+pow(t,3)+pow(d,3)==i)
            printf("%d ",i);
    }

    return 0;
}