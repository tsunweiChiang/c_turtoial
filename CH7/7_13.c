#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    while (ch != 17 && ch != 3)
    {
        ch = getch();
        printf("ASCII of char= %d\n", ch);
    }

    return 0;
}