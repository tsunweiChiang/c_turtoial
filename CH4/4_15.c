#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Input a hexadecimal number: ");
    scanf_s("%x",&num);
    printf("Octal: %o\n",num);
    printf("Decimal: %d",num);
}