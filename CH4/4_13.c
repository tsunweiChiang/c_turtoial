#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    printf("��J�����W�L10���r��");
    scanf_s("%s", str);
    printf("\n");
    printf("\"%s\"\n", str);
    printf("\\%20s\\\n", str);
    printf("\\%-20s\\\n", str);
}