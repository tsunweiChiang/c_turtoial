#include <stdio.h>

int main() {
    int startNum; // ��??�J���_�l?
    printf("Input a number�G");
    scanf("%d", &startNum);


    int count = 0; // ??���A�Τ_��?�w��쪺???�q
	int i;
	int j;
    for (j=startNum+1;count<5;j++)
	{
        int isPrime = 1; // ��??�e?�r�O??

        if (j <= 1) {
            isPrime = 0; // 1 �M�p�_ 1 ��?���O??
        } 
		else {
            for (i = 2; i * i <= j; i++) {
                if (j % i == 0) {
                    isPrime = 0; // ��Q�㰣�A���O??
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
