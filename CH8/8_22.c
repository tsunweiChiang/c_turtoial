#include <stdio.h>
#include <stdlib.h>

/*function*/
int rsum(int n);
/*main*/
int main()
{
    int num,ans;

    printf("Enter a number: ");
    scanf_s("%d",&num);

    ans=rsum(num);

    printf("Ans: %d\n",ans);

    system("pause");
    return 0;
}

int rsum(int n)
{
    if(n==0 || n==1)
        return 0;
    else if(n==2)
        return 2;
    else
        return n*(n-1)+rsum(n-1);
}