#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;

    printf("�п�J�Ĥ@�Ӧr��:");
    scanf_s("%c", &ch1);
    printf("�п�J�ĤG�Ӧr��:");
    fflush(stdin);
    scanf_s("%c", &ch2);
    printf("ch1=%c, ch2=%c\n", ch1, ch2);
}