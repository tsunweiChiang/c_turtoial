#include <stdio.h>
#include <stdlib.h>

void counter(void);

int main()
{
    counter();
    counter();

    system("pause");
    return 0;
}

void counter(void)
{
    static int n=1;

    printf("counter() is called %d times\n",n);

    n++;
}