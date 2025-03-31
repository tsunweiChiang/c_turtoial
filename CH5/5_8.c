#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("輸入平行四邊形底和高: ");
    scanf_s("%d,%d", &a, &b);
    printf("面積為: %d\n", a * b);
}