#include <stdio.h>
#include <stdlib.h>
#define LENGTH 1000
/*function*/
void toLower(char str[]);
/*main*/
int main()
{
    char str[LENGTH];
    gets(str);
    toLower(str);
    puts(str);
    return 0;
}

void toLower(char str[])
{
    int i;
    for(i=0;i<LENGTH;i++)
    {
        if(str[i]>=65 &&str[i]<=90)
            str[i]+=32;
    }

}