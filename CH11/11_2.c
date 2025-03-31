#include <stdio.h>
#include <stdlib.h>
/*a*/
struct date
{
    /* data */
    int year;
    int month;
    int day;
};


int main()
{
    /*b*/
    struct date holiday={2004,4,26};

    /*c*/
    struct date festival;
    scanf_s("%d,%d,%d",&festival.year,&festival.month,&festival.day);

    /*d*/
    printf("%2d/%2d/%4d\n",holiday.month,holiday.day,holiday.year);
    printf("%2d/%2d/%4d\n",festival.month,festival.day,festival.year);
    
    return 0;
}