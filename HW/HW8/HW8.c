#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	//8.1
	printf("8.1: \n");
	int num[50]={0};
	int gen[100];
    int n = 100;
    double sum=0;
    double sqt = 0;
    
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
    	
		gen[i] = (rand() % 50) + 1;
		printf("%4d ",gen[i]);
		num[gen[i]-1]+=1;
		sum += gen[i];
		sqt+= gen[i] * gen[i];
		
	}
	printf("\n\n");
	
	double avg = sum / 100;
	int max_freq = 0;
    int mode_value = 0;
    double center;
    int center_sum=0;
    for (int i = 0; i < 50; i++)
    {
  	
		printf("%4d:%4d ",i+1,num[i]);
		if (num[i] > max_freq)
		{
            max_freq = num[i];
            mode_value = i+1;
        }
	}
	printf("\n\n");
	
	for (int i = 0; i < 50; i++)
    {
  	
        center_sum+=num[i];
        if(center_sum>50)
        {
        	center=i+1;
        	break;
		}
		else if (center_sum>50)
		{
			center=(i+1+i+2)/2;
        	break;
		}
	}
    double variance = (sqt / 100) - (avg * avg);
    double std_dev = sqrt(variance);
    printf("Mean: %f\n", avg);
    printf("Mode: %d\n", mode_value);
    printf("Median: %f\n", center);
    printf("Standard Deviation: %f\n", std_dev);
    printf("\n");
    //8.2
    printf("8.2: \n");
    int odd[100]={0};
    int even[100]={0};
    int odd_now=0;
    int even_now=0;
    for (int i = 0; i < 50; i++)
    {
    	if(num[i]!=0)
    	{
    		if ((i+1)%2==0)//even
    		{
    			for(int j=even_now;j<even_now+num[i];j++)
    			{
    				even[j]=i+1;
				}
				even_now+=num[i];
			}
			else
			{
				for(int j=odd_now;j<odd_now+num[i];j++)
    			{
    				odd[j]=i+1;
				}
				odd_now+=num[i];
			}
		}
	}
	printf("odd:\n");
	for (int i=0;i<100;i++)
	{
		if(odd[i]==0)
		{
			printf("\n");
			break;
		}
		else
		{
			printf("%4d ",odd[i]);
		}
	}
	printf("\n");
    printf("even:\n");
	for (int i=0;i<100;i++)
	{
		if(even[i]==0)
		{
			printf("\n");
			break;
		}
		else
		{
			printf("%4d ",even[i]);
		}
	}
	return 0;    
 } 
