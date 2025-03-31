#include <stdio.h>
#include <stdlib.h>

/*a*/
struct time
{
    /* data */
    int hour;
    int minutes;
    double seconds;
};

struct date{
    int year;
    int month;
    int day;
    struct time t; 
    
};

int main()
{
    /*b*/
    struct date now={2025,2,25,{4,44,25.00}};
    /*c*/
    printf("%02d/%02d/%04d  %02d:%02d:%05.2f\n",now.month,now.day,now.year,now.t.hour,now.t.minutes,now.t.seconds);
    /*d*/
    int now_size=sizeof(now);
    printf("%d",now_size);
}