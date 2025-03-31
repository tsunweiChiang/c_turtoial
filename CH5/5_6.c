#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km;
    printf("輸入英哩: ");
    scanf_s("%f", &km);
    printf("%f英哩=%f公里\n", km, km * 1.6);
}