#include <stdio.h>
#define max 1000
int arr[max]={0};

int number(int n)
{
    if(n==0)
        return 0;
    else
    {
        if(arr[n]!=0)
            return n;
        else
        {
            if(n==1)
            {
                arr[n]=1;
                return 1;
            }
            else if(n==2)
            {
                arr[n]=2;
                return 2;
            }
            else
            {
                return number(n-1)+number(n-2);
            }
                

        }
    }

    
}

int main()
{
    int n;
    while(1)
    {
        scanf_s("%d",&n);
        printf("%d\n",number(n));
    }
    

}