#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;

    while(1)
    {
        num++;
        if(num%3==1 && num%5==3 && num%7==2)
            break;
    }
    
    printf("%d",num);
}