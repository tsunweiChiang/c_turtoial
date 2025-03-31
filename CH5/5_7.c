#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km;
    printf("輸入公里: ");
    scanf_s("%f", &km);
    printf("%f公里=%f英哩\n", km, km / 1.6);
}