#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    
    for(i=1;i<=100;i++)
    {
        if(i%12==0)
            continue;
        else if (i%2==0 && i%3==0)
        {
            /* code */
            printf("%d ",i);
        }
        
    }

    return 0;
}