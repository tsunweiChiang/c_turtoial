#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct student {
    char name[50];  // 使用固定大小的字元陣列來存學生姓名
    int score;
};

int main() {
    struct student s[5];

    int i, max = INT_MIN, a = -1, total = 0;

    // 輸入學生資料
    for (i = 0; i < 5; i++) {
        printf("%dth student name and score: ", i + 1);
        scanf("%s %d", s[i].name, &s[i].score);
    }

    // 遍歷陣列
    for (i = 0; i < 5; i++) {
        // 找出最高分學生
        if (s[i].score > max) {
            max = s[i].score;
            a = i;
        }

        // 找出不及格學生（分數 < 60）
        if (s[i].score < 60)
            printf("%s score : %d\n", s[i].name, s[i].score);

        total += s[i].score;
    }

    // 輸出最高分的學生
    printf("heigest: %s : %d\n", s[a].name, s[a].score);
    

    // 計算並輸出平均分數
    double c = (double)total / 5;
    printf("avreage: %.2lf\n", c);

    return 0;
}