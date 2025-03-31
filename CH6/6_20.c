#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Input a number: ");
    scanf_s("%d",&num);

    switch(num)
    {
        case 1:
            printf("Spring");
            break;
        
        case 2:
            printf("Summer");
            break;

        case 3:
            printf("Autumn");
            break;

        case 4:
            printf("Winter");
            break;
        
        default:
            printf("Error");
    }
}