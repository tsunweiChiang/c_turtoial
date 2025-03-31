#include <stdio.h>
#include <stdlib.h>

struct date
{
    /* data */
    int year;
    int month;
    int day;
};
int main()
{
    
    printf("%d",sizeof(struct date));

    return 0;
}