#include <stdio.h>
#include <stdlib.h>

/*prime*/
int prime(int n)
{
    int i=2,count=0;
    int ans;
    while (1)
    {
        /* code */
        int j;
        for(j=2;j<=i;j++)
        {
            if(j==i)
            {
                count++;
                break;
            }
            
            else if(i%j==0)
            {
                break;
            }

        }

        if(count==n)
        {
            ans=i;
            break;
        }

        i++;

    }

    return ans;
    

}
/*main*/
int main()
{
    int num,ans;
    
    printf("Input a number: ");
    scanf_s("%d",&num);

    ans=prime(num);

    printf("%dth prime number is: %d",num,ans);
    
}