#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;

    printf("Input a day");
    scanf_s("%d",&day);

    switch (day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Work!");
            break;
        case 6:
        case 7:
            printf("Break!");
            break;
        default:
            printf("Error");
            break;
    }
}