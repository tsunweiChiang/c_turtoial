#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[][11]={"C language","C++","Java"};
    printf("%d",sizeof(arr));
    int i;
    for(i=0;i<3;i++)
    {
        puts(arr[i]);
    }
}