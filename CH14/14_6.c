#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    double average=0.0;
    struct student{
        char name[10];
        int score;
    }*ptr;
    printf("Number of student: ");
    scanf_s("%d",&num);
    ptr=(struct student *)malloc(num*sizeof(struct student));
    for(i=0;i<num;i++)
    {
        fflush(stdin);
        printf("student%d`s name: ",i+1);
        scanf("%s",(ptr+i)->name);
        printf("student%d`s score: ",i+1);
        scanf_s("%d",&(ptr+i)->score);
        average+=(ptr+i)->score;
    }
    for(i=0;i<num;i++)
      printf("%s: score=%d\n",(ptr+i)->name,(ptr+i)->score);
    printf("average: %lf",average/(double)num);
}