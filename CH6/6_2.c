#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("�п�J�@�Ӿ��");
    scanf_s("%d", &num);

    if (num > 0)
        printf("�z��J����Ƥj��0\n");
    if (num < 0)
        printf("�z��J����Ƥp��0\n");
    if (num == 0)
        printf("�z��J����Ƶ���0\n");

    return 0;
}