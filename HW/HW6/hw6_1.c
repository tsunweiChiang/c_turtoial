#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int i,j,num,c_prime,len,num_l,c,k,mod,s_num;
    bool c_p=true;
    c_prime=0;
    printf("Please input a range[i, j]: ");
    scanf_s("%d %d",&i,&j);

    /*range number*/
    for(num=i;num<=j;num++)
    {
        s_num=num;
        len=0;
        for(num_l=num;num_l>0;num_l/=10)
            len++;
        c_p=true;
        for(c=1;c<=len;c++)
        {
            mod=s_num%10;
            s_num/=10;
            s_num+=mod*pow(10,len-1);
            /*prime or not*/
            for(k=2;k<s_num;k++)
            {
                if(s_num%k==0)
                {
                    c_p=false;
                    break;
                }
            }
            /*shift*/
            if(c_p==false)
                break;
            
                
        }
        if(c_p==true)
            c_prime+=1;
    }
    
    if(c_prime==0)
        printf("No Circular Primes.\n");
    else
        printf("%d Circular Primes.\n",c_prime);
}