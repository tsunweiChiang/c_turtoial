#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;

    printf("Input your grade: ");
    scanf_s("%d",&grade);

    if (grade>79)
        printf("You got A\n");
    else if(grade<80 && grade>59)
        printf("You got B\n");
    else
        printf("You got C\n");

    return 0;
}