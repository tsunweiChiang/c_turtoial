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



int main()
{
    int arr[]={12,38,64,37};
    struct NODE *list=createlist(arr,4);
    struct NODE *head=list;
    while(list->next!=NULL)
    {
        if(list->next->data==38||list->next->data==64)
        {
            struct NODE*t=(struct NODE*)malloc(sizeof(struct NODE));
            t=list->next;
            list->next=t->next;
            free(t);
        }
        else
            list=list->next;
    }
    while (head!=NULL)
    {
        /* code */
        printf("%d->",head->data);
        head=head->next;
    }
    
}
