#include <stdio.h>
#include <stdlib.h>

int main()
{
    char value;
    scanf_s("%c",&value);
    printf("Octal representation: %o\n",value);
    printf("Decimal representation: %d\n",value);
    printf("Hexadecimal representation: %x\n",value);
}