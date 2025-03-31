#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str="We are best friend.";
    int count=0,small=0;

    while(*(str+count)!='\0')
    {
        if(*(str+count)>=97 && *(str+count)<=122)
            small++;
        count++;
    }
        
    /*a*/
    printf("%d char\n",count);
    printf("small: %d",small);
    return 0;
}