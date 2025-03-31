#include <stdlib.h>
#include <stdio.h>

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

void insertlist(struct NODE *list,int item,int pos)
{
    int i=0;
    while (list!=NULL)
    {
        /* code */
        if(i==(pos-1))
        {
            struct NODE *t=(struct NODE*)malloc(sizeof(struct NODE));
            t->data=item;
            t->next=list->next;
            list->next=t;
            break;
        }
        else
        {
            list=list->next;
            i++;
        }
    }
    
}

int main()
{
    int arr[]={12,38,64,37};
    struct NODE *list=createlist(arr,4);
    insertlist(list,47,3);
    while(list!=NULL)
    {
        printf("%d->",list->data);
        list=list->next;
    }

}