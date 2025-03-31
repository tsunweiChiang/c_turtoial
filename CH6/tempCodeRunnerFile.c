#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("輸入三個整數\n");
    scanf_s("%d,%d,%d", &a, &b, &c);
    if (a + b > c || b + c > a || a + c > b)
        printf("可組成三角形\n");
    else
        printf("不可組成三角形\n");

    return 0;
}