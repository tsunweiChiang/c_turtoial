#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first[10];
    char last[10];

    scanf_s("%s %s",first,last);
    printf("Name: %s %s",last,first);
}