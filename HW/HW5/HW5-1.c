#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int c1, c2, c3, c4; // �q�����Ʀr
    int u1, u2, u3, u4; // ���a�q���Ʀr
    int na, nb, times = 10;

    srand(time(NULL));

    // ���ͤ����ƪ�4��q���Ʀr
    do {
        c1 = rand() % 10;
        c2 = rand() % 10;
        c3 = rand() % 10;
        c4 = rand() % 10;
    } while (c1 == c2 || c1 == c3 || c1 == c4 || c2 == c3 || c2 == c4 || c3 == c4);

    do {
        do{
        	printf("input four different number:(�Ҧp2178)");
        	scanf("%1d%1d%1d%1d", &u1, &u2, &u3, &u4);
        	if (u1 == u2 || u1 == u3 || u1 == u4 || u2 == u3 || u2 == u4 || u3 == u4)
        	{
        		printf("Numbers should not be repeated. Try again.\n");
			} 
			
		}while (u1 == u2 || u1 == u3 || u1 == u4 || u2 == u3 || u2 == u4 || u3 == u4);
        na = (c1 == u1) + (c2 == u2) + (c3 == u3) + (c4 == u4);
        nb = (c1 == u2) + (c1 == u3) + (c1 == u4) +
             (c2 == u1) + (c2 == u3) + (c2 == u4) +
             (c3 == u1) + (c3 == u2) + (c3 == u4) +
             (c4 == u1) + (c4 == u2) + (c4 == u3);

        if (na != 4) {
            times--;
            printf("���G�G%dA%dB�A�٦�%d�����|...\n", na, nb, times);
        }
    } while (na != 4 && times > 0);

    if (na == 4) {
        puts("�z�q��F�I");
    } else {
        printf("���ѡA�q�W�L10���A���׬O%d%d%d%d\n", c1, c2, c3, c4);
    }

    system("pause");
    return 0;
}
