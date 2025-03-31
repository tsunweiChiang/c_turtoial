#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int count =0;
    for(a = 1; a <= 5; a++) 
	{
        for(b = 1; b <= 5; b++) {
            if(b == a) continue;
            for(c = 1; c <= 5; c++) {
                if(c == a || c == b) continue;
                for(d = 1; d <= 5; d++) {
                    if(d == a || d == b || d == c) continue;
                    for(e = 1; e <= 5; e++) {
                        if(e == a || e == b || e == c || e == d) continue;
                        
                        printf("%d%d%d%d%d\n", a, b, c, d, e);
                        count+=1;
                    }
                }
            }
        }
    }
    printf("There are %d orders in total.",count);
    return 0;
}
