#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int cnt=0;
    int password=6128;

    while(1)
    {
        cnt++;
        printf("Enter the password: ");
        scanf_s("%d",&input);
        if(input==password)
        {
            printf("Correct!!\n");
            break;
        }
        else if(cnt>=3)
        {
            printf("Wrong!!\n");
            break;
        }
        
    }

    return 0;
}