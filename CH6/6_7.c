#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("��J�T�Ӿ��\n");
    scanf_s("%d,%d,%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
        printf("�i�զ��T����\n");
    else
        printf("���i�զ��T����\n");

    return 0;
}