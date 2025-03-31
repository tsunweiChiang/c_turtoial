#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Input a number:");
    scanf_s("%d",&num);
    printf("Octal: %o\n",num);
    printf("Hexadecimal: %x",num);
}