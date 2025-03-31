#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month,date;

    printf("Please enter the month: ");
    scanf_s("%d",&month);
    if(month>12 || month<0)
        printf("Please enter correct month.\n");
    else
    {   printf("Please enter the date: ");
        scanf_s("%d",&date);
        switch (month)
        {
            case 1:
                if (date>19 && date<32)
                    printf ("0%d/%d belongs to Aquarius \n",month,date);
                else if(date>0 && date<20)
                    printf ("0%d/%d belongs to Capricorn \n",month,date);
                else
                    printf("Please enter correct date.");
                break;
            case 2:
                if (date>18 && date<30)
                    printf ("0%d/%d belongs to Pisces \n",month,date);
                else if(date>0 && date<19)
                    printf ("0%d/%d belongs to Aquarius \n",month,date);
                else
                    printf("Please enter correct date.");
                break;
            
            case 3:
                if (date>20 && date<32)
                    printf ("0%d/%d belongs to Aries \n",month,date);
                else if(date>0 && date<20)
                    printf ("0%d/%d belongs to Pisces \n",month,date);
                else
                    printf("Please enter correct date.");
                break;
            case 4:
                if (date>19 && date<31)
                    printf ("0%d/%d belongs to Taurus \n",month,date);
                else if(date>0 && date<20)
                    printf ("0%d/%d belongs to Aries \n",month,date);
                else
                    printf("Please enter correct date.");
                break;

            case 5:
                if (date>20 && date<32)
                    printf ("0%d/%d belongs to Gemini \n",month,date);
                else if(date>0 && date<21)
                    printf ("0%d/%d belongs to Taurus \n",month,date);
                else
                    printf("Please enter correct date.");
                break;

            case 6:
                if (date>20 && date<31)
                    printf ("0%d/%d belongs to Cancer \n",month,date);
                else if(date>0 && date<21)
                    printf ("0%d/%d belongs to Gemini \n",month,date);
                else
                    printf("Please enter correct date.");
                break;

            case 7:
                if (date>22 && date<32)
                    printf ("0%d/%d belongs to Leo \n",month,date);
                else if(date>0 && date<23)
                    printf ("0%d/%d belongs to Cancer \n",month,date);
                else
                    printf("Please enter correct date.");
                break;  

            case 8:
                if (date>22 && date<32)
                    printf ("0%d/%d belongs to Virgo \n",month,date);
                else if(date>0 && date<22)
                    printf ("0%d/%d belongs to Leo \n",month,date);
                else
                    printf("Please enter correct date.");
                break;

            case 9:
                if (date>22 && date<31)
                    printf ("0%d/%d belongs to Libra \n",month,date);
                else if(date>0 && date<23)
                    printf ("0%d/%d belongs to Virgo \n",month,date);
                else
                    printf("Please enter correct date.");
                break;

            case 10:
                if (date>22 && date<32)
                    printf ("%d/%d belongs to Scorpio \n",month,date);
                else if(date>0 && date<23)
                    printf ("%d/%d belongs to Libra \n",month,date);
                else
                    printf("Please enter correct date.");
                break;
            case 11:
                if (date>21 && date<31)
                    printf ("%d/%d belongs to Sagittarius \n",month,date);
                else if(date>0 && date<22)
                    printf ("%d/%d belongs to Scorpio  \n",month,date);
                else
                    printf("Please enter correct date.");
                break;

            case 12:
                if (date>21 && date<32)
                    printf ("%d/%d belongs to Capricorn \n",month,date);
                else if(date>0 && date<22)
                    printf ("%d/%d belongs to Sagittarius \n",month,date);
                else
                    printf("Please enter correct date.");
                break;

            default:
                break;
        }
    }
    return 0;

}