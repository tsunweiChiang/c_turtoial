#include <stdio.h>
#include <stdlib.h>

struct student{
    char *name;
    int score;
};

int main()
{
    struct student s[5];

    s[1].name="David";
    s[1].score=99;
    s[2].name="Leo";
    s[2].score=90;
    s[3].name="Dannel";
    s[3].score=88;
    s[4].name="John";
    s[4].score=50;
    s[0].name="Alan";
    s[0].score=70;

    int i,max=INT_MIN,a,total=0;

    for(i=0;i<5;i++)
    {
        if(s[i].score>max)
        {
            max=s[i].score;
            a=i;
        }
        /*b*/
        if(s[i].score<60)
            printf("%s: %d\n",s[i].name,s[i].score);
        total+=s[i].score;
            
    }
    /*a*/
    printf("%s\n",s[a].name);
    /*c*/
    double c=total/5.0;
    printf("average: %lf",c);

}
