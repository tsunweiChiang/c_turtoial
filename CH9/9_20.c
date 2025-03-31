#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
/*function*/
void count(int arr[]);
/*main*/
int main()
{
    int arr[SIZE]={5,6,3,5,8,10};
    count(arr);
    return 0;
}

void count(int arr[])
{
    int i,odd=0,even=0;
    
    for(i=0;i<SIZE;i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }

    printf("Even: %d Odd: %d",even,odd);
}