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
    struct NODE a,b,c,d;
    struct NODE *ptr=&a,*first=&a;
    a.data=12;
    a.next=&b;
    b.data=38;
    b.next=&c;
    c.data=64;
    c.next=&d;
    d.data=73;
    while (ptr!=NULL)
    {
        /* code */
        if(ptr->next->data==38)
        {
            ptr->next=ptr->next->next;
            break;
        }
        else
            ptr=ptr->next;

    }

    while (first!=NULL)
    {
        /* code */
        printf("%d->",first->data);
        first=first->next;
    }
    
}