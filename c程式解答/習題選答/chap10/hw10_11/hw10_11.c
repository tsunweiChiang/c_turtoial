/* hw10_11.c */
#include <stdio.h>
#include <stdlib.h>
void add10(int *,int *);
int main(void)
{
   int a=3, b=5;
   
   printf("呼叫函數add10()之前: ");
   printf("a=%d, b=%d\n",a,b);    	
   add10(&a,&b);
   printf("呼叫函數add10()之後: ");
   printf("a=%d, b=%d\n",a,b);
   
   system("pause");
   return 0;
}

void add10(int *p1,int *p2)
{
   *p1=*p1+10;
   *p2=*p2+10;
}

/* output------------------------
呼叫函數add10()之前: a=3, b=5
呼叫函數add10()之後: a=13, b=15
-------------------------------*/
