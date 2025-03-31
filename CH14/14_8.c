#include <stdio.h>
#include <stdlib.h>

int *deleteElement(int *arr,int pos,int length)
{
    int *re=(int *)malloc((length-1)*sizeof(int));
    int i;
    for(i=0;i<length;i++)
    {
        if(i<pos)
            re[i]=arr[i];
        else if(i==pos)
            continue;
        else
            re[i-1]=arr[i];
    }

    return re;
}

int main()
{
    int num,i;
    printf("array`s length:");
    scanf_s("%d",&num);
    int *arr=(int *)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
    {
        scanf_s("%d",&arr[i]);
    }
    int *res=deleteElement(arr,2,num);
    for(i=0;i<num-1;i++)
    {
        printf("%3d",res[i]);
    }
    free(arr);
    free(res);
}

