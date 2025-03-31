#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*function*/
int find_k(int num);
/*main*/
int main()
{
    int num,ans;

    printf("Input a number:");
    scanf_s("%d",&num);

    ans=find_k(num);

    printf("Nearliest %d number is %d",num,ans);

    return 0;
}

int find_k(int num)
{
    int ans=1,min=32768,dis,n=1;
    while (1)
    {
        /* code */
        printf("%d\n",n);
        dis=abs(num-(4*n+2));
        
        if(dis>min)
            break;
        if(dis<min)
            min=dis;
            ans=n;
        
        printf("%d,%d,%d\n",dis,min,ans);
        
        n++;

    }
    
    return ans;
}