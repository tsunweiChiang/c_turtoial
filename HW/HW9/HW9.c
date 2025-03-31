#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//7.1
	printf("7.1\n");
	srand( time(NULL) );
	int matrix1[3][3],matrix2[3][3],add[3][3],sub[3][3],mult[3][3];
	int i,j,k;
	//add &suub
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            //矩陣初始化 
			matrix1[i][j] = rand() % 100;
            matrix2[i][j] = rand() % 100;
            add[i][j] = matrix1[i][j] + matrix2[i][j];
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    // 初始化結果矩陣
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            mult[i][j] = 0;
        }
    }
    //mult
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                mult[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    //printf出全部矩陣
	printf("a.\n");
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("[%d][%d] = %2d, ", i, j, matrix1[i][j]);
        }
        printf("\n");
    }
	printf("b.\n");
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("[%d][%d] = %2d, ", i, j, matrix2[i][j]);
        }
        printf("\n");
    }
	printf("add.\n");
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("[%d][%d] = %2d, ", i, j, add[i][j]);
        }
        printf("\n");
    }
	printf("sub.\n");
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("[%d][%d] = %2d, ", i, j, sub[i][j]);
        }
        printf("\n");
    }
	printf("multi.\n");
	for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("[%d][%d] = %2d, ", i, j, mult[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
	//7.2
	printf("7.2\n");
	int num1,num2;
	printf("Frist array length:\n");
	scanf("%d",&num1);
	printf("\n");
	printf("Second array length:\n");
	scanf("%d",&num2);
	int arry1[num1],arry2[num2];
	//rand 1st and 2nd array
	for(i = 0; i < num1; i++)
    {
    	arry1[i]= rand() % 21;
    }
    for(i = 0; i < num2; i++)
    {
    	arry2[i]= rand() % 21;
    }
    //first array
	printf("First array:[ ");
	for(i = 0; i < num1; i++)
    {
    	printf("%d ",arry1[i]);
    }
	printf("]\n");
	//bubble sort
	int temp;
	for (i = 0; i < num1-1; i++) 
	{
        for (j = 0; j < num1-i-1; j++) 
		{
            if (arry1[j] > arry1[j+1]) 
			{
                // 交換 arr[j] 和 arr[j+1]
                temp = arry1[j];
                arry1[j] = arry1[j+1];
                arry1[j+1] = temp;
            }
        }
    }
	printf("After bubble sort:[ ");
	for(i = 0; i < num1; i++)
    {
    	printf("%d ",arry1[i]);
    }
	printf("]\n");
	//second array
	printf("Second array:[ ");
	for(i = 0; i < num2; i++)
    {
    	printf("%d ",arry2[i]);
    }
	printf("]\n");
	//insertion sort
	for (i = 1; i < num2; i++) 
	{
        temp=arry2[i];
		for (j = i-1; j >=0; j--) 
		{
            if (arry2[j] > temp) 
			{
                arry2[j+1] = arry2[j];
            }
            else
            {
            	break;
			}
        }
        arry2[j+1]=temp;
    }
	printf("After insertion sort:[ ");
	for(i = 0; i < num2; i++)
    {
    	printf("%d ",arry2[i]);
    }
	printf("]\n");
	//merge
	int merge[num1+num2];
	int merge1=0,merge2=0,k1=0;
	// 合併兩個已排序的陣列
    while (merge1 < num1 && merge2 < num2) {
        if (arry1[merge1] < arry2[merge2]) {
            merge[k1++] = arry1[merge1++];
        } else {
            merge[k1++] = arry2[merge2++];
        }
    }
    while (merge1 < num1) {
        merge[k1++] = arry1[merge1++];
    }
    while (merge2 < num2) {
        merge[k1++] = arry2[merge2++];
    }
	printf("After merge and sorting:[ ");
	for(i = 0; i < num1+num2; i++)
    {
    	printf("%d ",merge[i]);
    }
	printf("]\n");
}
