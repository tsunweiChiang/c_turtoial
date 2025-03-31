#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    /* data */
    int data;
    struct NODE*next;
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

void insertelement(struct NODE *list,int ins, int pos)
{
    while (list!=NULL)
    {
        /* code */
        if(list->data==pos)
        {
            struct NODE *t=(struct NODE*)malloc(sizeof(struct NODE));
            t->data=ins;
            t->next=list->next;
            list->next=t;
            break;
        }
        else
            list=list->next;
    }
}

struct NODE* deleteelement(struct NODE *list,int ele)
{
    struct NODE*previous,*first=NULL;
    while(list!=NULL)
    {
        if(list->data==ele)
        {
            if(first==NULL)
            {
                first=list->next;
                return first;
            }
            else
            {
                previous->next=list->next;
                free(list);
                return first;
            }
            break;   
        }
        else
        {
            if(first==NULL)
                first=list;
            previous=list;
            list=list->next;

        }
            
    }
    return first;
}

int main()
{
    int arr[]={12,43,56,34,98,76,43,24};
    struct NODE*list=createlist(arr,8);
    insertelement(list,88,56);
    list=deleteelement(list,12);
    list=deleteelement(list,34);
    list=deleteelement(list,24);
    while (list!=NULL)
    {
        /* code */
        printf("%d->",list->data);
        list=list->next;
    }
    
    
}