#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct date		/* �w�q���cdate */
   {
      int month;
      int day;
   };
   struct data		/* �w�q�_�����cdata */
   {
      char name[10];
      int math;
      struct date birthday;		
   } s1;  
   scanf_s("%s",s1.name);
   scanf_s("%d,%d",&s1.birthday.month,&s1.birthday.day);
   scanf_s(" %d",&s1.math);
   printf("Name: %s\n",s1.name); 
   printf("birthday: %d/%d\n",s1.birthday.month,s1.birthday.day);
   printf("Math: %d\n",s1.math);
   
   system("pause");
   return 0;
}
