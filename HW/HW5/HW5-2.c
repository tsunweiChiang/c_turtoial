#include <stdio.h>
#include <stdlib.h>

int main( ) {
	
    int i,n, reversedNumber = 0, gcd=0,remainder;
	
    printf("Enter an integer: ");
    scanf("%d", &n);
	int orinum=n;
    for (; n != 0; n /= 10) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    } 
	for(i=1; i <= orinum && i <=reversedNumber ; ++i) {
        // 檢查i是否是兩個數字的因子
        if(orinum % i == 0 && reversedNumber % i == 0)
            gcd = i;
    }
    printf("Reversed Number: %d\n", reversedNumber);
    printf("GCD of %d and %d is %d\n", orinum, reversedNumber, gcd);
    return 0;
}
