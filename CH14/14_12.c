#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    /* data */
    int data;
    struct NODE *next;
};

int main()
{
    struct NODE *current,*first=NULL,*previous;
    int i;
    for(i=0;i<4;i++)
    {
        current=(struct NODE*)malloc(sizeof(struct NODE));
        scanf_s("%d",&(current->data));
        if(first==NULL)
            first=current;
        else   
            previous->next=current;
        current->next=NULL;
        previous=current;
    }

    while (first!=NULL)
    {
        /* code */
        printf("%d->",first->data);
        first=first->next;
    }
    

}
