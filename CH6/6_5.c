#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kg;

    printf("��J�魫\n");
    scanf_s("%d", &kg);

    if (kg > 90)
        printf("�魫�L��");
    else
        printf("���|�L��");

    return 0;
}