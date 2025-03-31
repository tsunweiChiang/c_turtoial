#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[10];
    int score;
};

int main()
{
    struct student s[5],*ptr;
    ptr=s;


    int i,max=INT_MIN,a,total=0;
    for(i=0;i<5;i++)
    {
        printf("%d`s name",i+1);
        gets((ptr+i)->name);
        printf("%d`s score",i+1);
        scanf_s("%d",&(ptr+i)->score);
        fflush(stdin);
    }
    for(i=0;i<5;i++)
    {
        if((ptr+i)->score>max)
        {
            max=(ptr+i)->score;
            a=i;
        }
        /*b*/
        if((ptr+i)->score<60)
            printf("%s: %d\n",(ptr+i)->name,(ptr+i)->score);
        total+=s[i].score;
            
    }
    /*a*/
    printf("%s\n",(ptr+a)->name);
    /*c*/
    double c=total/5.0;
    printf("average: %lf",c);

}
