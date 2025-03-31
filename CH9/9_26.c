#include <stdio.h>
#include <stdlib.h>
#define LENGTH 1000
/*function*/
int length(char str[]);
/*main*/
int main()
{
    char str[LENGTH];
    gets(str);
    printf("length: %d",length(str));
}

int length(char str[])
{
    int len,i;
    for(i=0;i<LENGTH;i++)
    {
        if(str[i]=='\0')
            break;
        len++;
    }

    return len;
}