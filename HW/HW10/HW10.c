#include <stdio.h>
#include <string.h>
#include<time.h>
#include <stdlib.h>

int main() {
	//10.1
	printf("10.1\n");
	int arr[10];
	int start,end,max=0;
    srand(time(NULL)); // 初始化隨機數種子
    int maxProd = 0;
    // 生成 10 個 -5 到 5 之間的隨機數
    printf("[");
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 11 - 5; // 生成 -10 到 10 的隨機數
        printf("%d ", arr[i]);
    }
    printf("]\n");
	for (int i=0;i<10;i++)
	{
		
		int currProd = 1;
		for (int j=i;j<10;j++)
		{
			currProd *= arr[j];
            if (currProd > maxProd)
			{
                maxProd = currProd;
                start = i;
                end = j;
			}
		}
	}
	printf("Maximum Product Subarray is from position %d to %d with product %lld\n", start+1, end+1, maxProd);
    printf("The subarray is: ");
    printf("[");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
    printf("\n");
    //10.2
    printf("10.2\n");
    int count =0;
    char str[] = "RLRRLL"; // 可以更改這個字符串進行測試
    printf("Input a string: ");
    scanf("%s",str);
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        int countR = 0, countL = 0;
        for (int j = i; j < length; j++) {
            if (str[j] == 'R') {
                countR++;
            } else if (str[j] == 'L') {
                countL++;
            }

            if (countR == countL) {
            	count+=1;
                // 打印平衡子串
                for (int k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
                printf("\n");
            }
        }
    }
    printf("Maximum number of balanced substrings: %d\n", count);

    return 0;
}
