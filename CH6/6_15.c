#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pay, price, back;
    int a, b, c, d, e, f, g;

    printf("Input price and pay");
    scanf_s("%d,%d", &price, &pay);

    if (pay >= price)
    {
        back = pay - price;
        a = back / 1000;
        b = (back % 1000) / 500;
        c = (back % 500) / 100;
        d = (back % 100) / 50;
        e = (back % 50) / 10;
        f = (back % 10) / 5;
        g = (back % 5) / 1;
        printf("����^");
        if(a>0)
        printf("%d�i1000��,",a);
        if(b>0)
        printf("%d�i500��,",b);
        if(c>0)
        printf("%d�i100��,",c);
        if(d>0)
        printf("%d��50���w��,",d);
        if(e>0)
        printf("%d��10���w��,",e);
        if(f>0)
        printf("%d��5���w��,",f);
        if(g>0)
        printf("%d��1���w��",g);
    }

    else
        printf("money not enough!");
}