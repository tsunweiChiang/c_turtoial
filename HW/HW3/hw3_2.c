#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pay=0;
    char red_light,speeding,license,helmet,cell_phone,opposite;

    printf("Did David run a red light?\n");
    scanf_s("%c",&red_light);
    if(red_light==89 || red_light==121)
        pay+=3600;
    else if(red_light==78 || red_light==110)
        pay+=0;
    printf("Was David speeding?\n");
    scanf_s(" %c",&speeding);
    if(speeding==89 || speeding==121)
        pay+=1200;
    else if(speeding==78 || speeding==110)
        pay+=0;
    printf("Dose David have a driver's license?\n");
    scanf_s(" %c",&license);
    if(license==89 || license==121)
        pay+=0;
    else if(license==78 || license==110)
        pay+=24000;
    printf("Was David wearing his helmet?\n");
    scanf_s(" %c",&helmet);
    if(helmet==89 || helmet==121)
        pay+=0;
    else if(helmet==78 || helmet==110)
        pay+=500;
    printf("Was David using the cell phone while riding?\n");
    scanf_s(" %c",&cell_phone);
    if(cell_phone==89 || cell_phone==121)
        pay+=3000;
    else if(cell_phone==78 || cell_phone==110)
        pay+=0;
    printf("Was David riding in opposite direction?\n");
    scanf_s(" %c",&opposite);
    if(opposite==89 || opposite==121)
        pay+=1800;
    else if(opposite==78 || opposite==110)
        pay+=0;

    printf("David haves to pay $%d",pay);

}