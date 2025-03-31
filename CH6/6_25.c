#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year=1900;
    printf_year:
        if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && year % 4000 != 0)
            printf("%d ",year);
        year++;
        if(year<=2000)
        {
            goto printf_year;
        }

    return 0;
}