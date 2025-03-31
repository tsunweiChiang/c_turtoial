#include <stdlib.h>
#include <stdio.h>

/*function*/
int find(int n)
{ 
    int i=1,num=1;
    while (i<=n)
    {
        /* code */
        if(num%3==2 && num%5==3 && num%7==2)
            i++;
        
        num++;
        
    }

    return num-1;

}

/*main*/
int main()
{
    int num=1;
    /*a*/
    while(1)
    {
        if(num%3==2 && num%5==3 && num%7==2)
            break;
        num++;
    }
        
    printf("min: %d\n",num);

    /*b*/
    int b1,b2;
    b1=find(5);
    b2=find(7);
    printf("%d, %d\n",b1,b2);

    /*c*/
    int c;
    int i;
    for(i=1;i<=12;i++)
    {
        c=find(i);
        printf("%d ",c);
    }

    return 0;
}