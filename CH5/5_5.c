#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tem;
    printf("��J�ؤ�ū�: ");
    scanf_s("%f", &tem);
    printf("���ū׬�: %f\n", (tem - 32) * (5 / 9.0));
}