/* prog11_7, 結構陣列的使用 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 2
struct data			/* 定義結構data */
   {
      char name[10];
      int math;
   } student[MAX];
int main(void)
{
   int i;
   		/* 宣告結構陣列student */
   for(i=0;i<MAX;i++)	 
   {
      printf("Nmae: ");
      gets((student+i)->name);		/* 輸入學生姓名 */
      printf("Score: ");
      scanf("%d",&(student+i)->math);		/* 輸入學生數學成績 */
      fflush(stdin);            			/* 清空緩衝區內的資料 */
   }

   for(i=0;i<MAX;i++)					/* 輸出結構陣列的內容 */
      printf("%s`s Score=%d\n",(student+i)->name,(student+i)->math);
   
   system("pause");
   return 0;
}
