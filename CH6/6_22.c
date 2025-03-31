#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Input 'a' or 'b' :");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'a':
        case 'A':
            printf("You input 'A'");
            break;
        case 'b':
        case 'B':
            printf("You input 'B'");
            break;
        default:
            printf("Not 'A' or 'B'");
            break;
    }
}