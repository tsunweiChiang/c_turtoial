#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("輸入四位數整數: ");
    scanf_s("%d", &year);

    if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && year % 4000 != 0)
        printf("是閏年\n");
    else
        printf("不是閏年\n");

    return 0;
}