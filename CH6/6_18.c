#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height, weight;

    printf("��J�������魫\n");
    scanf_s("%d,%d", &height, &weight);

    (weight > 90 && height < 180) ? printf("�魫�L��") : printf("���|�L��");

    return 0;
}