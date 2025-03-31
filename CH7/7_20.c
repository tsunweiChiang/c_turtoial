#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, sum = 0;

    while (sum <= 1000)
    {
        sum += i;
        i++;
    }

    printf("%d", i - 1);
}