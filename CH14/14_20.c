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
        current=(struct NODE*)malloc(sizeof(struct NODE));
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

struct NODE * insertfirst(struct NODE *list,int item)
{
    struct NODE *first=(struct NODE *)malloc(sizeof(struct NODE));
    first->data=item;
    first->next=list;
    return first;
}

int main()
{
    int arr[]={12,43,56,34,98};
    struct NODE *list=createlist(arr,5);
    list=insertfirst(list,58);
    while(list!=NULL)
    {
        printf("%d->",list->data);
        list=list->next;
    }
}