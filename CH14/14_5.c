#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num,*i;
    struct student
    {
        /* data */
        char name[10];
        int score;

    }*ptr;

    num=(int *)malloc(sizeof(int));
    i=(int *)malloc(sizeof(int));
    printf("Number of student:");
    scanf_s("%d",num);
    ptr=(struct student *)malloc((*num)*sizeof(struct student));
    for((*i)=0;(*i)<(*num);(*i)++)
    {
        fflush(stdin);
        printf("Name of student%d :",(*i)+1);
        gets((ptr+(*i))->name);
        printf("score of student%d :",(*i)+1);
        scanf_s("%d",&(ptr+(*i))->score);
    }
    for((*i)=0;(*i)<(*num);(*i)++)
        printf("%s`s score: %d\n",(ptr+(*i))->name,(ptr+(*i))->score);

    free(ptr);
    free(num);
    free(i);
    
}