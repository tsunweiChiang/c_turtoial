#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5]={74,48,30,17,62};
    int i ,min=A[0],max=A[0];
    for(i=0;i<5;i++)
    {
        if(*(A+i)>max)
            max=*(A+i);
        if(*(A+i)<min)
            min=*(A+i);
    }
    
    printf("Max: %d\nMin: %d",max,min);

    return 0;
}