#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day=0;
    double len=3000;

    while(len>=5)
    {
        day+=1;
        len/=2.0;
    }

    printf("%d days",day);

    return 0;
}