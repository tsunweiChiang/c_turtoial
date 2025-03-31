#include <stdio.h>
#include <stdlib.h>

/*cub*/
int cub(int x)
{
    int i;
    int base=x;
    for(i=0;i<2;i++)
    {
        x*=base;
    }

    return x;
}
/*main*/
int main()
{
    int num;
    int base;
    scanf_s("%d",&base);
    num=cub(base);
    printf("%d",num);

    return 0;
}