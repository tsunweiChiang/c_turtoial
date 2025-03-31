#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[10];
    int score;
}Score;

void display(Score s)
{
    printf("Name:%s\n",s.name);
    printf("Score:%d\n",s.score);
}

int main()
{
    Score s={"David",100};
    display(s);

    return 0;
}