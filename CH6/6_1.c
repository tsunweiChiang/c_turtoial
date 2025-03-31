#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("輸入一個字元\n");
    scanf("%c", &ch);
    if(ch>=48 && ch<=57)
    {
        printf("此字元是數字");
    }
    if((65<=ch&&ch<=90)||(97<=ch&&ch<=122))
    {
        printf("此字元是英文字母");
    }
    
    return 0;
}