#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c;
    
    printf("輸入三個整數\n");
    scanf_s("%d,%d,%d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
    {
        if (pow(a,2) + pow(b,2)== pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2))
            printf("此三角形是直角三角形\n");
        else
        {
            if (pow(a,2) + pow(b,2) < pow(c,2) || pow(a,2) + pow(c,2) < pow(b,2) || pow(c,2) + pow(b,2) < pow(a,2))
                printf("此三角形是頓角三角形\n");
            if (pow(a,2) + pow(b,2) > pow(c,2) && pow(a,2) + pow(c,2) > pow(b,2) && pow(c,2) + pow(b,2) > pow(a,2))
                printf("此三角形是銳角三角形\n");
        }
        
    }
    else
        printf("不可組成三角形\n");

    return 0;
}