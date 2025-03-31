
#include <stdio.h>
#include <stdlib.h>
int fib(int);		
int main(void)
{
   int n;
   for(n=1;n<=10;n++)
      printf("fib(%d)=%d\n",n,fib(n));		

   system("pause");
   return 0;
}

int fib(int n)
{	
   int i;
   int fn,fn_1=1,fn_2=1;
   if(n==1 || n==2)
      return 1;
   else
      for(i=3;i<=n;i++)   
      {
         fn=fn_1+fn_2;
         fn_2=fn_1;
         fn_1=fn;
      }
   return fn;  


}
