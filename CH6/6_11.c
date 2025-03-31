#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour;

    printf("Input hours");
    scanf_s("%d",&hour);

    if(hour<61)
        printf("money: %d",hour*75);
    if(hour<76 && hour >60)
        printf("money: %f",60*75+(hour-60)*75*1.25);
    if(hour>75)
        printf("money: %f",60*75+(hour-75)*75*1.75+15*1.25*75);
    
    return 0;

}