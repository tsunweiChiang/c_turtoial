/* prog9_8, 陣列搜尋 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6		/* 定義SIZE為6 */
int main(void)
{
   int i,num,flag=0;
   int A[SIZE]={33,75,69,41,33,19};
		
   printf("array A:");
   for(i=0;i<SIZE;i++)			
      printf("%d ",A[i]); 			/* �L�X�}�C�����e */
   
   printf("\nEnter search number:");		
   scanf_s("%d",&num); 				/* ��J���j�M����� */
   
   for(i=0;i<SIZE;i++)
      if(A[i]==num)	/* �P�_�}�C�����O�_�P��J�ȬۦP */
      {
         printf("Find! A[%d]=%d\n",i,A[i]);
         flag=1;		/* �]flag��1�A�N�������ۦP���ƭ� */
      }
   if(flag==0)
      printf("Not find value!!\n");
   
   system("pause");
   return 0;
}

