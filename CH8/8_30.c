#include <stdio.h>
#include <stdlib.h>
void add10(int,int);				/* add10()���쫬 */
int a=3, b=5;
int main(void)
{   
   printf("before add10() : ");
   printf("a=%d, b=%d\n",a,b);    	/* �L�Xa�Bb���� */
   add10(a,b);
   printf("after add10() : ");
   printf("a=%d, b=%d\n",a,b);		/* �L�Xa�Bb���� */
   
   system("pause");
   return 0;
}

void add10(int x,int y)
{
   a=a+10;				/* �N�ܼ�a���ȥ[10����A�]�^��a */
   b=b+10; 				/* �N�ܼ�b���ȥ[10����A�]�^��b */
}
