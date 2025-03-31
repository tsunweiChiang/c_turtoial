#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Input a number\n");
    scanf_s("%d",&num);

    if (num<0)
        printf("The abs of number is %d",num-(num*2));
    else 
        printf("The abs of number is %d",num);

    return 0;
}