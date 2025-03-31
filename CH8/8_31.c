#include <stdlib.h>
#include <stdio.h>
#define F(x) 4*x*x+6*x-5

/*main*/
int main()
{
    printf("%lf,%lf,%lf",F(1.0),F(2.2),F(3.14));

    return 0;
}