#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Input a number\n");
    scanf_s("%d",&num);

    if (num%2==0)
        printf("Number is even\n");
    else
        printf("Number is odd\n");

    return 0;
}