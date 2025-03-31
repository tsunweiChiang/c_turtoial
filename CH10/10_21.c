#include <stdio.h>
#include <stdlib.h>
/*function*/
void display(char *,int n);

/*main*/
int main()
{
    int num;
    char *str="Welcome to my class";

    printf("Input a number:");
    scanf_s("%d",&num);

    display(str,num);

    return 0;
}

void display(char *str,int n)
{
    str+=n-1;
    puts(str);
}