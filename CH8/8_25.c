#include <stdio.h>
#include <stdlib.h>
int fib(int);
void counter(void);	
int main(void)
{
   printf("fib(5)=%d\n",fib(5));		

   system("pause");
   return 0;
}

int fib(int n) 
{	
   counter();
   if(n==1 || n==2)
   {

      return 1;
   }   
   else
      return (fib(n-1)+fib(n-2));
}

void counter(void)
{
    static int n=1;

    printf("counter() is called %d times\n",n);

    n++;
}