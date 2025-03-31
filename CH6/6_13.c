#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;

    printf("Input month: ");
    scanf_s("%d",&month);

    if(month==12 ||month<3)
        printf("Winnter\n");
    else if (month>2 && month<6)
        printf("Spring\n");
    else if (month>5 && month<9)
        printf("Summer\n");
    else if (month>8 && month<12)
        printf("Autumn\n");
    
    return 0;
}