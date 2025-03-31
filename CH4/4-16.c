#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[8],str2[8],str3[8];
    printf("Input a string:");
    scanf_s("%s %s %s",str1,str2,str3);
    printf("The string is %s %s %s\n",str1,str2,str3);

    return 0;
}