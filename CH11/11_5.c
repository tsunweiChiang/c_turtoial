#include <stdio.h>
#include <stdlib.h>

struct time{
    int hour;
    int minutes;
    double second;
};

int main()
{
    struct time t={10,12,25.00};
    
    printf("%lld",sizeof(t));
}