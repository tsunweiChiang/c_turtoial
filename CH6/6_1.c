#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("��J�@�Ӧr��\n");
    scanf("%c", &ch);
    if(ch>=48 && ch<=57)
    {
        printf("���r���O�Ʀr");
    }
    if((65<=ch&&ch<=90)||(97<=ch&&ch<=122))
    {
        printf("���r���O�^��r��");
    }
    
    return 0;
}