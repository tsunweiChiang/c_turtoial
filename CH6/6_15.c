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
        printf("應找回");
        if(a>0)
        printf("%d張1000元,",a);
        if(b>0)
        printf("%d張500元,",b);
        if(c>0)
        printf("%d張100元,",c);
        if(d>0)
        printf("%d個50元硬幣,",d);
        if(e>0)
        printf("%d個10元硬幣,",e);
        if(f>0)
        printf("%d個5元硬幣,",f);
        if(g>0)
        printf("%d個1元硬幣",g);
    }

    else
        printf("money not enough!");
}