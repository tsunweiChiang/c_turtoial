#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("��J�@�y��\n");
    scanf_s("(%f,%f)", &x, &y);
    if (x == 0 && y != 0)
        printf("���y�b\n");
    if (x != 0 && y == 0)
        printf("���x�b\n");
    if (x > 0 && y > 0)
        printf("���Ĥ@�H��\n");
    if (x < 0 && y > 0)
        printf("���ĤG�H��\n");
    if (x < 0 && y < 0)
        printf("���ĤT�H��\n");
    if (x > 0 && y < 0)
        printf("���ĥ|�H��\n");

    return 0;
}