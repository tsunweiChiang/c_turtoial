#include <stdio.h>
#include <stdlib.h>

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
   } ; 


int main()
{
    struct data s1={"david",90,{6,13}};
    int size=sizeof(s1);
    printf("%d",size);

}