#include <stdio.h>
#include <stdlib.h>
/*function*/
int length(char *);
/*main*/
int main()
{
    int i;
    char *ptr[3]={"Tom","Lily","James Lee"};
    for(i=0;i<3;i++)
    {
        printf("%d char\n",length(ptr[i]));
    }

    return 0;
}

int length(char *str)
{
    int count=0;

    while (1)
    {
        /* code */
        count++;
        if(*(str+count)=='\0')
            break;
    }
    return count+1;

}