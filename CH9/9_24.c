#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[300];
    int i,count=0;
    gets(str);
    for(i=0;i<300;i++)
    {
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
            count++;
        if(str[i]=='\0')
            break;
        
    }
    printf("%d",count);

}