#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height, weight;

    printf("��J�������魫\n");
    scanf_s("%d,%d", &height, &weight);

    if (weight > 90 && height < 180)
        printf("�魫�L��");
    else
        printf("���|�L��");

    return 0;
}