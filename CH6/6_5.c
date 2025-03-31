#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kg;

    printf("輸入體重\n");
    scanf_s("%d", &kg);

    if (kg > 90)
        printf("體重過重");
    else
        printf("不會過重");

    return 0;
}