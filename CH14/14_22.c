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

void combinelist(struct NODE *list1,struct NODE *list2)
{
    while(list1!=NULL)
    {
        if(list1->next==NULL)
        {
            list1->next=list2;
            break;
        }
        else
            list1=list1->next;
    }
}

int main()
{
    int arr1[]={12,43,56,34,98};
    int arr2[]={36,77,99};

    struct NODE *list1=createlist(arr1,5);
    struct NODE *list2=createlist(arr2,3);

    combinelist(list1,list2);

    while (list1!=NULL)
    {
        /* code */
        printf("%d->",list1->data);
        list1=list1->next;
    }
    
    return 0;
}
