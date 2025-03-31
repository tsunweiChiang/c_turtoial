#include <stdio.h>
#include <stdlib.h>
/*a*/
struct time{
    int hour;
    int minutes;
    double second;
}; 

int main()
{
    /*b*/
    struct time start={12,32,25.49};
    /*c*/
    struct time end={15,12,17.53};
    /*d*/
    printf("%02d:%02d:%05.2f\n",start.hour,start.minutes,start.second);
    printf("%02d:%02d:%05.2f\n",end.hour,end.minutes,end.second);
    /*e*/
    struct time elapse;
    if(end.second<start.second)
    {
        end.minutes-=1;
        end.second+=60.00;
    }
    elapse.second=end.second-start.second;
    if(end.minutes<start.minutes)
    {
        end.hour-=1;
        end.minutes+=60;
    }
    elapse.minutes=end.minutes-start.minutes;
    elapse.hour=end.hour-start.hour;
    printf("%02d:%02d:%05.2f",elapse.hour,elapse.minutes,elapse.second);
}