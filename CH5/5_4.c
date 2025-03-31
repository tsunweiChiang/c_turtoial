#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tem;
    printf("輸入攝氏溫度: ");
    scanf_s("%f", &tem);
    printf("華氏溫度為: %f\n", (9 / 5.0) * tem + 32);
}