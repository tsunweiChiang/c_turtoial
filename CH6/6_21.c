#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Input 'a' or 'b' :");
    scanf_s("%c",&ch);

    switch (ch)
    {
        case 'a':
            printf("You input 'a'");
            break;
        case 'b':
            printf("You input 'b'");
            break;
        default:
            printf("Not 'a' or 'b'");
            break;
    }
}