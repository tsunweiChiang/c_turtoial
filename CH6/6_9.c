#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    int A=0,B=0,C=0;

    printf("Input 10 grades\n");
    scanf_s("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    if(a>0)
    {
        if(a<60)
            C+=1;
        if(a>75)
            A+=1;
        if(a>=60 && a<=75)
            B+=1;
    }

    if(b>0)
        {
            if(b<60)
                C+=1;
            if(b>75)
                A+=1;
            if(b>=60 && b<=75)
                B+=1;
        }
    if(c>0)
    {
        if(c<60)
            C+=1;
        if(c>75)
            A+=1;
        if(c>=60 && c<=75)
            B+=1;
    }
    if(d>0)
    {
        if(d<60)
            C+=1;
        if(d>75)
            A+=1;
        if(d>=60 && d<=75)
            B+=1;
    }
    if(e>0)
    {
        if(e<60)
            C+=1;
        if(e>75)
            A+=1;
        if(e>=60 && e<=75)
            B+=1;
    }
    if(f>0)
    {
        if(f<60)
            C+=1;
        if(f>75)
            A+=1;
        if(f>=60 && f<=75)
            B+=1;
    }
    if(g>0)
    {
        if(g<60)
            C+=1;
        if(g>75)
            A+=1;
        if(g>=60 && g<=75)
            B+=1;
    }
    if(h>0)
    {
        if(h<60)
            C+=1;
        if(h>75)
            A+=1;
        if(h>=60 && h<=75)
            B+=1;
    }
    if(i>0)
    {
        if(i<60)
            C+=1;
        if(i>75)
            A+=1;
        if(i>=60 && i<=75)
            B+=1;
    }
    if(j>0)
    {
        if(j<60)
            C+=1;
        if(j>75)
            A+=1;
        if(j>=60 && j<=75)
            B+=1;
    }
        
    printf("A: %d\n",A);
    printf("B: %d\n",B);
    printf("C: %d\n",C);

    return 0;
}