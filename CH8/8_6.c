#include <stdio.h>
#include <stdlib.h>

/*power*/
int power(int x, int n)
{
    int i,base=1;

    for(i=0;i<n;i++)
    {
        base*=x;
    }

    return base;
}
/*main*/
int main()
{
    int base,mul,ans;

    printf("Input the base and power:");
    scanf_s("%d,%d",&base,&mul);

    ans=power(base,mul);

    printf("Ans: %d",ans);

    return 0;
}