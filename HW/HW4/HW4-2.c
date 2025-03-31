#include <stdio.h>

int main() {
    int startNum; // 用??入的起始?
    printf("Input a number：");
    scanf("%d", &startNum);


    int count = 0; // ??器，用于跟?已找到的???量
	int i;
	int j;
    for (j=startNum+1;count<5;j++)
	{
        int isPrime = 1; // 假??前?字是??

        if (j <= 1) {
            isPrime = 0; // 1 和小于 1 的?不是??
        } 
		else {
            for (i = 2; i * i <= j; i++) {
                if (j % i == 0) {
                    isPrime = 0; // 能被整除，不是??
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", j);
            count++;
        }

    }

    printf("\n");

    return 0;
}
