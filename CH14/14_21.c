#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    /* data */
    int data;
    struct NODE *next;
};

struct NODE *createlist(int *arr,int length)
{
    struct NODE *current,*first=NULL,*previous;
    int i;
    for(i=0;i<length;i++)
    {
        current=(struct NODE *)malloc(sizeof(struct NODE));
        current->data=arr[i];
        if(first==NULL)
            first=current;
        else
            previous->next=current;
        current->next=NULL;
        previous=current;
    }

    return first;
}


int listlength(struct NODE *first)
{
    int length=0;
    while(first!=NULL)
    {
        length+=1;
        first=first->next;
    }

    return length;
}

int main()
{
    int arr[]={12,43,56,34,98};
    struct NODE *list=createlist(arr,5);
    printf("list`s length:%d",listlength(list));
}
