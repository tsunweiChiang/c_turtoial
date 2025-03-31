#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("輸入一座標\n");
    scanf_s("(%f,%f)", &x, &y);
    if (x == 0 && y != 0)
        printf("位於y軸\n");
    if (x != 0 && y == 0)
        printf("位於x軸\n");
    if (x > 0 && y > 0)
        printf("位於第一象限\n");
    if (x < 0 && y > 0)
        printf("位於第二象限\n");
    if (x < 0 && y < 0)
        printf("位於第三象限\n");
    if (x > 0 && y < 0)
        printf("位於第四象限\n");

    return 0;
}