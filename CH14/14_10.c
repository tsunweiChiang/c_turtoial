#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main()
{
    struct Node a,b,c,d,e;
    struct Node *ptr=&a,*first=&a;
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
        if((ptr->data)==38)
        {
            struct Node insert;
            insert.data=92;
            insert.next=ptr->next;
            ptr->next=&insert;
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
