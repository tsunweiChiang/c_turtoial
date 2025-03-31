#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*function*/
int is_prime(int n)
{
    int num=pow(2,n)-1;
    if(num==1)
        return 0;
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            return 0;
    }

    return 1;
}

/*main*/
int main()
{
    int count;
    int i=1;
    
    while (count<8)
    {
        /* code */
        if(is_prime(i))
        {
            printf("%d ",(int)pow(2,i)-1);
            count++;
        }

        i++;
    }
    

    return 0;
}