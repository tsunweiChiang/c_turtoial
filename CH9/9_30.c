#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 10

/*function*/
void strinng_cpy(char arr1[MAX][LENGTH], char arr2[MAX][LENGTH]);

/*main*/
int main()
{
    char arr1[MAX][LENGTH]={"Tom","Lily","James Lee"};
    char arr2[MAX][LENGTH];

    strinng_cpy(arr1,arr2);
    int i;
    for(i=0;i<MAX;i++)
    {
        puts(arr2[i]);
    }
    

}

void strinng_cpy(char arr1[MAX][LENGTH], char arr2[MAX][LENGTH])
{
    int i,j;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<LENGTH;j++)
        {
            if(arr1[i][j]=='\0')
                break;
            else
                arr2[i][j]=arr1[i][j];
        }
        arr2[i][j]='\0';
    }
}