#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, c, d;
    int ea, eb, ec, ed;
    int na, nb;

    /*生成四不重複數字*/
    srand(time(NULL));
    a = rand() % 10;
    while (1)
    {
        b = rand() % 10;
        if (b == a)
            continue;
        else
            break;
    }
    while (1)
    {
        c = rand() % 10;
        if (c == a || c == b)
            continue;
        else
            break;
    }
    while (1)
    {
        d = rand() % 10;
        if (d == a || d == b || d == c)
            continue;
        else
            break;
    }
    printf("%d%d%d%d\n", a, b, c, d);

    /*輸入10次數字*/
    int i = 0;
    while (i <= 10)
    {
        i += 1;
        printf("Input four different number:(例如2178): ");
        scanf_s("%1d%1d%1d%1d", &ea, &eb, &ec, &ed); /*只讀1位 */
        /*比較幾a幾b*/
        na = 0;
        nb = 0;
        na = (a == ea) + (b == eb) + (c == ec) + (d == ed);
        nb = (a == eb) + (a == ec) + (a == ed) +
             (b == ea) + (b == ec) + (b == ed) +
             (c == ea) + (c == eb) + (c == ed) +
             (d == ea) + (d == eb) + (d == ec);
        if (na == 4)
        {
            printf("Correct!!!");
            break;
        }
        else
        {
            if (i == 10)
            {
                printf("Error, Answer is %d%d%d%d", a, b, c, d);
                break;
            }
            else
                printf("Error: %dA%dB, Have %d times...\n", na, nb, 10 - i);
        }
    }
}