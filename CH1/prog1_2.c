#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    printf("Input a character:");
    scanf_s("%c",&ch);
    printf("ch=%c, The ASCII code is %d\n",ch,ch);

    system("pause");/*暫停*/
    return 0;
}