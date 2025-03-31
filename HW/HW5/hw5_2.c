#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,pr_num,i,min,rev=0,gcd=1;

    /*輸入一個數字*/
    printf("Enter an number: ");
    scanf_s("%d",&num);
    
    /*複製輸入*/
    pr_num=num;

    /*一直除10及%10到結果為0*/
    while(num>0)
    {
        rev*=10;
        rev+=num%10;
        num/=10;
        if (num==0)
            break;
    }
    
    /*找最大公因數*/
    /*比較兩數大小*/
    if(pr_num<rev)
        min=pr_num;
    else
        min=rev;
    /*由1~min依序比較 */
    for(i=1;i<=min;i++)
    {
        if(pr_num%i==0 && rev%i==0)
            gcd=i;
    }

    /*印出結果*/
    printf("Reversed Number: %d\n",rev);
    printf("GCD of %d and %d is %d",pr_num,rev,gcd);

    return 0;

}