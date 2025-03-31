#include <stdio.h>
#include <stdlib.h>

/*function*/
int sum2(int n);
/*main*/
int main()
{
    int num,ans;

    printf("Input a number:");
    scanf_s("%d",&num);

    ans=sum2(num);

    printf("The sum from 2~%d is %d\n",2*num,ans);
    
    system("pause");
    return 0;
}

int sum2(int n)
{
    if(n==1)
        return 2;
    else
        return 2*n+sum2(n-1);
}