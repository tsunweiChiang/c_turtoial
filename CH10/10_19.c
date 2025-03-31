#include <stdio.h>
#include <stdlib.h>

/*function*/
int length(char *);
/*main*/
int main()
{
    char *str="hi!";
    int count;

    count=length(str);

    printf("length: %d",count);
    return 0;
}

int length(char *str)
{
    int count=0;

    while(*(str+count)!='\0')
        count++;
    
    return count;
}