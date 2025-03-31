#include <stdlib.h>
#include <stdio.h>

/*function*/
int fib(int n);
int for_loop(int n);
void fib_counter();
void for_counter();
int r_c,f_c;
/*main*/
int main()
{
    int i;
    
    for(i=1;i<=30;i++)
    {
        r_c=0;
        f_c=0;
        for_loop(i);
        fib(i);
        printf("n= %d,for loop: %d times,recursion: %d times.\n",i,f_c,r_c);
    }
}

int for_loop(int n)
{
    
    int fn,i,fn_1,fn_2;
    for(i=1;i<=n;i++)
    {
        for_counter();
        if(n==1 || n==2)
            return 1;
        else
        {
            fn=fn_1+fn_2;
            fn_1=fn_2;
            fn_2=fn;
        }
            
    }
    return fn;
}
    
        
     


int fib(int n)
{
    fib_counter();
    if(n==1 || n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);    
}

void for_counter()
{
    f_c++;
}

void fib_counter()
{
    r_c++;
}
