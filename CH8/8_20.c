#include <stdio.h>
#include <stdlib.h>

/*function*/
int sum(int n);
/*main*/
int main()
{
    int num,ans;

    printf("Input a number:");
    scanf_s("%d",&num);

    ans=sum(num);

    printf("The sum from 1~%d is %d\n",num,ans);
    
    system("pause");
    return 0;
}

int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}