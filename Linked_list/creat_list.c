#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *current,*first,*previous;
    int arr[5]={6,5,3,2,1};
    int i;
    for(i=0;i<5;i++)
    {
        current=(struct node *)malloc(sizeof(struct node));
        current->data=arr[i];
        if(i==0)
            first=current;
        else
            previous->next=current;
        current->next=NULL;
        previous=current;
    }

    struct node *node1=first;
    while(node1!=NULL)
    {
        printf("%2d",node1->data);
        node1=node1->next;
    }
}