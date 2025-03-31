#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main()
{
    struct Node a,b,c,d;
    struct Node *ptr=&a;
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
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    


}

