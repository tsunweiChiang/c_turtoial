#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("��J�|��ƾ��: ");
    scanf_s("%d", &year);

    if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && year % 4000 != 0)
        printf("�O�|�~\n");
    else
        printf("���O�|�~\n");

    return 0;
}