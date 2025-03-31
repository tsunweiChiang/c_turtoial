#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i=0,j=0,max=2;

    printf("Enter a number: ");
    scanf_s("%d",&num);
    /*判斷n/2到n之間所有數字*/
    for(i=num/2;i<num;i++)
    {
        for(j=2;j<=i;j++)
        {
            /*不是質數的話繼續*/ 
            if(i==j)
            {
                max=i;
            }
            else if ( i%j==0)
            {
                break;
            }
        }

    }

    printf("Max prime smaller than %d is %d",num,max);
}