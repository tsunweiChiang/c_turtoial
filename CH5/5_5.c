#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tem;
    printf("輸入華氏溫度: ");
    scanf_s("%f", &tem);
    printf("攝氏溫度為: %f\n", (tem - 32) * (5 / 9.0));
}