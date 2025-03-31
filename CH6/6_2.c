#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("請輸入一個整數");
    scanf_s("%d", &num);

    if (num > 0)
        printf("您輸入的整數大於0\n");
    if (num < 0)
        printf("您輸入的整數小於0\n");
    if (num == 0)
        printf("您輸入的整數等於0\n");

    return 0;
}