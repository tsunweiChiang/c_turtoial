#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("1_a\n");
    int a1=8;
    printf("a=%d\n",++a1);
    printf("a=%d\n\n",a1--);

    printf("1_b\n");
    int a2=10,b2=20;
    a2=a2%5;
    b2=b2/6;
    printf("a=%d\n",a2);
    printf("b=%d\n\n",b2);

    printf("1_c\n");
    int a3=20,b3=5;
    a3=a3%b3;
    b3=b3*3;
    printf("a=%d\n",a3);
    printf("b=%d\n",b3);

    return 0;

}