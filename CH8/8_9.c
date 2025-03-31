#include <stdio.h>
#include <stdlib.h>
/*finction*/
int is_prime(int); 
/*main*/
int main(void)
{
    int i;
    for (i = 1; i <= 30; i++) 
        if (is_prime(i))      
            printf("%3d", i); 
    printf("\n");
    system("pause");
    return 0;
}

/*is_prime*/
int is_prime(int num) 
{
    if(num==1)
        return 0;
    int i;
    for (i = 2; i <= num - 1; i++)
        if (num % i == 0)
            return 0;
    return 1;
}
