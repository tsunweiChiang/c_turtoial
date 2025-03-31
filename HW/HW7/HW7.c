#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//7.1
	int n;
    int count = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
	if (n>3)
	{
		
		printf("Side length of triangle:\n");
    	for(int a = 1; a < n; a++) {
        	for(int b = n + 1; b < 2 * n; b++) {
            	if (a > b - n && b < a + n) {
            		printf("%d %d %d\n",a,n,b);
                	count++;
            	}
        	}
    	}
	}
    else
    {
    	count=0;
	}
	printf("Number of triangles with n as the middle side length: %d\n", count);
    
	printf("\n");
	//7.2
	printf("7.2\n");	
	srand( time(NULL) );
	int a11, a12, a13, a21, a22, a23, a31, a32, a33;
    int b11, b12, b13, b21, b22, b23, b31, b32, b33;
    a11= rand() % 100;
    a12= rand() % 100;
    a13= rand() % 100;
    a21= rand() % 100;
    a22= rand() % 100;
    a23= rand() % 100;
    a31= rand() % 100;
    a32= rand() % 100;
    a33= rand() % 100;
    b11= rand() % 100;
    b12= rand() % 100;
    b13= rand() % 100;
    b21= rand() % 100;
    b22= rand() % 100;
    b23= rand() % 100;
    b31= rand() % 100;
    b32= rand() % 100;
    b33= rand() % 100;
    printf("a.\n");
    for(int row = 1; row <= 3; row++) {
        for(int col = 1; col <= 3; col++) {
            if(row == 1 && col == 1) printf("[%d ", a11);
            if(row == 1 && col == 2) printf("%d ", a12);
            if(row == 1 && col == 3) printf("%d]  ", a13);
            
            if(row == 2 && col == 1) printf("[%d ", a21);
            if(row == 2 && col == 2) printf("%d ", a22);
            if(row == 2 && col == 3) printf("%d]  ", a23);
            
            if(row == 3 && col == 1) printf("[%d ", a31);
            if(row == 3 && col == 2) printf("%d ", a32 );
            if(row == 3 && col == 3) printf("%d]  ", a33);
        }
        printf("\n");
    }
    printf("b.\n");
    for(int row = 1; row <= 3; row++) {
        for(int col = 1; col <= 3; col++) {
            if(row == 1 && col == 1) printf("[%d ", b11);
            if(row == 1 && col == 2) printf("%d ", b12);
            if(row == 1 && col == 3) printf("%d]  ", b13);
            
            if(row == 2 && col == 1) printf("[%d ", b21);
            if(row == 2 && col == 2) printf("%d ", b22);
            if(row == 2 && col == 3) printf("%d]  ", b23);
            
            if(row == 3 && col == 1) printf("[%d ", b31);
            if(row == 3 && col == 2) printf("%d ", b32);
            if(row == 3 && col == 3) printf("%d] ", b33);
        }
        printf("\n");
    }
    // 計算矩陣的加法
    printf("add.\n");
    
    for(int row = 1; row <= 3; row++) {
        for(int col = 1; col <= 3; col++) {
            if(row == 1 && col == 1) printf("[%d ", a11 + b11);
            if(row == 1 && col == 2) printf("%d ", a12 + b12);
            if(row == 1 && col == 3) printf("%d]", a13 + b13);
            
            if(row == 2 && col == 1) printf("[%d ", a21 + b21);
            if(row == 2 && col == 2) printf("%d ", a22 + b22);
            if(row == 2 && col == 3) printf("%d]", a23 + b23);
            
            if(row == 3 && col == 1) printf("[%d ", a31 + b31);
            if(row == 3 && col == 2) printf("%d ", a32 + b32);
            if(row == 3 && col == 3) printf("%d]", a33 + b33);
        }
        printf("\n");
    }
	printf("sub.\n");
    
    for(int row = 1; row <= 3; row++) {
        for(int col = 1; col <= 3; col++) {
            if(row == 1 && col == 1) printf("[%d ", a11 - b11);
            if(row == 1 && col == 2) printf("%d ", a12 - b12);
            if(row == 1 && col == 3) printf("%d]", a13 - b13);
            
            if(row == 2 && col == 1) printf("[%d ", a21 - b21);
            if(row == 2 && col == 2) printf("%d ", a22 - b22);
            if(row == 2 && col == 3) printf("%d]",a23 - b23);
        
            if(row == 3 && col == 1) printf("[%d ", a31 - b31);
            if(row == 3 && col == 2) printf("%d ", a32 - b32);
            if(row == 3 && col == 3) printf("%d]", a33 - b33);
        }
        printf("\n");
    }
    return 0;
}








