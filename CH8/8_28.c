#include <stdio.h>
#include <stdlib.h>

void counter(void);
int n=1;
int main()
{
    counter();
    counter();

    system("pause");
    return 0;
}

void counter(void)
{

    printf("counter() is called %d times\n",n);

    n++;
}