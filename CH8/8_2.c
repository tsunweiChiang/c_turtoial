#include <stdio.h>
#include <stdlib.h>

/*kitty*/
void kitty(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Hello Kitty\n");
    }
}

/*main*/
int main()
{
    int time;

    scanf_s("%d",&time);
    
    kitty(time);

    return 0;
}