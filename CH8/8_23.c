#include <stdio.h>
#include <stdlib.h>

/*function*/
int f(int n);
/*main*/
int main()
{   
    printf("Ans: %d\n",f(2));

    system("pause");
    return 0;
}

int f(int n)
{
    if(n==0)
        return 3;
    else 
        return 2*f(n-1)-5;
}