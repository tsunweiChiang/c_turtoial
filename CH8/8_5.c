#include <stdlib.h>
#include <stdio.h>

/*mod*/
int mod(int x, int y)
{
    int mod;
    mod=x%y;
    return mod;
}
/*main*/
int main()
{
    int num1,num2, ans;
    scanf_s("%d,%d",&num1,&num2);
    ans=mod(num1,num2);
    printf("%d",ans);

    return 0;
}