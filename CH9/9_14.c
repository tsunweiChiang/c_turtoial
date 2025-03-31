#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tem[3][4]={{18.2,17.3,15.0,13.4},{23.8,25.1,20.6,17.8},{20.6,21.5,18.4,15.7}};
    int i,j;
    /*a*/
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%6.2lf",tem[i][j]);
        }
        printf("\n");
    }
    /*b*/
    double b;
    for(j=0;j<4;j++)
    {
        b=0.0;
        for(i=0;i<3;i++)
        {
            b+=tem[i][j];
        }
        b/=3.0;
        printf("day%d average tmp:%6.2lf\n",j+1,b);
    }

    /*c*/
    double c;
    for(i=0;i<3;i++)
    {
        c=0.0;
        for(j=0;j<4;j++)
        {
            c+=tem[i][j];
        }
        c/=3.0;
        printf("time%d average tmp:%6.2lf\n",i+1,c);
    }
    /*d、e*/
    double max=0.0,min=100.0;
    int max_i,max_j;
    int min_i,min_j;
    for(i=0;i<3;i++)
    {

        for(j=0;j<4;j++)
        {
            if(tem[i][j]>max)
            {
                max=tem[i][j];
                max_i=i;
                max_j=j;
            }
            if(tem[i][j]<min)
            {
                min=tem[i][j];
                min_i=i;
                min_j=j;
            }
        }
        
    }
    printf("max tem time is %dday %dtime\n",max_i+1,max_j+1);
    printf("min tem time is %dday %dtime\n",min_i+1,min_j+1);
}