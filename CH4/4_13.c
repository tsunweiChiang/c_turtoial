#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    printf("輸入長不超過10的字串");
    scanf_s("%s", str);
    printf("\n");
    printf("\"%s\"\n", str);
    printf("\\%20s\\\n", str);
    printf("\\%-20s\\\n", str);
}