#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("(a) 12-4¢H6/4=%d\n", 12 - 4 % 6 / 4);
    printf("(b) 7*5¢H12*6/4=%d\n", 7 * 5 % 12 * 6 / 4);
    printf("(c) (13¢H6)/7*8=%d\n", (13 % 6) / 7 * 8);
}