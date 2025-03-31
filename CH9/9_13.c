#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price[5]={12,16,10,14,15};
    int sale[3][5]={{33,32,56,45,33},{77,33,68,45,23},{43,55,43,67,65}};
    int person[3],product[5];
    int sum,max=0,best=0;
    int i,j;
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            sum+=sale[i][j]*price[j];
        }

        person[i]=sum;
    }
    for(j=0;j<5;j++)
    {
        sum=0;
        for(i=0;i<3;i++)
        {
            sum+=sale[i][j]*price[j];
        }
        product[j]=sum;
    }

    /*a*/
    printf("a.\n");
    for(i=0;i<3;i++)
    {
        printf("%dth saler get: %d\n",i+1,person[i]);
    }

    /*b*/
    printf("b.\n");
    for(j=0;j<5;j++)
    {
        printf("%dth product get: %d\n",j+1,product[j]);
    }

    /*c*/
    printf("c.\n");
    max=0;
    best=0;
    for(i=0;i<3;i++)
    {
        if(person[i]>max)
        {
            max=person[i];
            best=i;
        }    
    }
    printf("%dth get most\n",best+1);
    /*d*/
    printf("d.\n");
    max=0;
    best=0;
    for(j=0;j<5;j++)
    {
        if(product[j]>max)
        {
            max=product[j];
            best=j;  
        } 
    }
    printf("%dth get most\n",best+1);

    return 0;
}