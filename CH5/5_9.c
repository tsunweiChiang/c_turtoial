#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    printf("��J�b�|: ");
    scanf_s("%d", &r);
    printf("��y��n: %f", (4 / 3.0) * 3.14 * (r ^ 3));
}