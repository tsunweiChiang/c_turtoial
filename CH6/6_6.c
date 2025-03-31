#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height, weight;

    printf("輸入身高及體重\n");
    scanf_s("%d,%d", &height, &weight);

    if (weight > 90 && height < 180)
        printf("體重過重");
    else
        printf("不會過重");

    return 0;
}