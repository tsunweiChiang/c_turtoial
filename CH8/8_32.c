#include <stdio.h>
#include <stdlib.h>
#define CUBIC(x) x*x*x

/*main*/
int main()
{
    printf("%d,%lf",CUBIC(5),CUBIC(2.4));

    return 0;
}