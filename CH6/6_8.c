#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c;
    
    printf("��J�T�Ӿ��\n");
    scanf_s("%d,%d,%d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
    {
        if (pow(a,2) + pow(b,2)== pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2))
            printf("���T���άO�����T����\n");
        else
        {
            if (pow(a,2) + pow(b,2) < pow(c,2) || pow(a,2) + pow(c,2) < pow(b,2) || pow(c,2) + pow(b,2) < pow(a,2))
                printf("���T���άO�y���T����\n");
            if (pow(a,2) + pow(b,2) > pow(c,2) && pow(a,2) + pow(c,2) > pow(b,2) && pow(c,2) + pow(b,2) > pow(a,2))
                printf("���T���άO�U���T����\n");
        }
        
    }
    else
        printf("���i�զ��T����\n");

    return 0;
}