#include <stdio.h>
int b=100;
void func(int *p)
{
    p=&b;
}

int main()
{
    
    int a=10;
    int *ptra=&a;
    func(ptra);
    printf("%d",*ptra);
}
