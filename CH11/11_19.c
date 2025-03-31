#include <stdio.h>
#include <stdlib.h>

int main()
{
    char key;
    enum color
    {
        red=114,
        green=103,
        blue=98
    }shirt;
    do
    {
        /* code */
        printf("input r or g or b:");
        scanf_s("%c",&key);
        fflush(stdin);
        if(key>=65&&key<=90)
            key+=32;
    } while ((key!=red)&&(key!=green)&&(key!=blue));
    
    shirt=key;
    switch (shirt)
    {
    case red:
        /* code */
        printf("red color");
        break;
    case green:
        /* code */
        printf("green color");
        break;
    case blue:
        /* code */
        printf("blue color");
        break;
    default:
        break;
    }
}