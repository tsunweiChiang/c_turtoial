#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;

    printf("請輸入第一個字元:");
    scanf_s("%c", &ch1);
    printf("請輸入第二個字元:");
    fflush(stdin);
    scanf_s("%c", &ch2);
    printf("ch1=%c, ch2=%c\n", ch1, ch2);
}