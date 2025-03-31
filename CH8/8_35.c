#include <stdio.h>
#include <stdlib.h>
#include "area.h"

/*main*/
int main()
{   
    printf("radius: %lf\n",CIRCLE(1.0));
    printf("area: %lf\n",RECTANGLE(5.0,4.6));
    printf("area: %lf\n",TRIANGLE(12.2,9.4));
    
    return 0;
}