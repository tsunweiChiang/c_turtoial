#include <stdio.h>
#include <stdlib.h>
#define LENGTH 1000

/*function*/
void reverse(char str[]);

/*main*/
int main()
{
    char str[LENGTH];

    gets(str);
    reverse(str);
    puts(str);

    return 0;
}

void reverse(char str[])
{
    int len=0,i;
    for(i=0;i<LENGTH;i++)
    {
        if(str[i]=='\0')
            break;
        len++;
    }
    int temp;
    for(i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
}