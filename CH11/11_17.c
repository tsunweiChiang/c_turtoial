#include <stdio.h>
#include <stdlib.h>

#define len 5

struct data
{
    /* data */
    char name[10];
    int score;
}student[len];

/*a*/
struct data best(struct data s[])
{
    int i=0,sc=0,a=0;
    for(i=0;i<len;i++)
    {
        if(s[i].score>sc)
        {
            sc=s[i].score;
            a=i;
        }
    }
    return s[a];
};
/*b*/
void failed(struct data s[])
{
    int i=0;
    printf("Failed:\n");
    for(i=0;i<len;i++)
    {
        if(s[i].score<60)
            printf("%s`s score: %d\n",s[i].name,s[i].score);
    }
};
/*c*/
double average(struct data s[])
{
    double c=0.0;
    int i=0;
    for(i=0;i<len;i++)
    {
        c+=s[i].score;
    }
    c=c/len;


    return c;
}
/*d*/
void sort(struct data s[])
{
    int i,j;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(s[j].score<s[j+1].score)
            {
                struct data temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("Sort:\n");
    for(i=0;i<len;i++)
    {
        printf("%s`s score: %d\n",s[i].name,s[i].score);
    }
}

int main()
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("Name: ");
        gets(student[i].name);
        printf("score: ");
        scanf_s("%d",&student[i].score);
        fflush(stdin);
    }
    struct data a=best(student);
    printf("Best:%s`s score: %d\n",a.name,a.score);
    failed(student);
    double c=average(student);
    printf("average: %lf\n",c);
    sort(student);

}