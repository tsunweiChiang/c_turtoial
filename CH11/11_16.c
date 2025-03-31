#include <stdio.h>
#include <stdlib.h>

struct time
{
    /* data */
    int hour;
    int minutes;
    double second;
};

void display(struct time t)
{
    printf("%02d/%02d/%05.2f\n",t.hour,t.minutes,t.second);
}

int main()
{
    struct time start={12,32,25.49};
    struct time end={15,12,17.53};
    display(start);
    display(end);
    struct time elaphs;
    if(end.second<start.second)
    {
        end.minutes-=1;
        end.second+=60;
    }
    elaphs.second=end.second-start.second;
    if(end.minutes<start.minutes)
    {
        end.hour-=1;
        end.minutes+=60;
    }
    elaphs.minutes=end.minutes-start.minutes;
    elaphs.hour=end.hour-start.hour;
        
    
    display(elaphs);

    return 0;
}
