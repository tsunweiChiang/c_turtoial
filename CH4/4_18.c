#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char ch;
    printf("Input a number: ");
    scanf_s("%d",&num);
    fflush(stdin);
    printf("Input a character: ");
    ch=getchar();
    printf("num=%d, ASCII of ch=%d\n",num,ch);
}