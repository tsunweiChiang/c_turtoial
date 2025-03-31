#include <stdio.h>

#define ROW 4
#define COL 3

// 修正函數宣告：使用 `int (*)[COL]` 來傳遞二維陣列
void search(int (*a)[COL], int *b);

int main()
{
    int a[ROW][COL] = {
        {26, 5, 7},
        {10, 3, 47},
        {6, 76, 8},
        {40, 4, 32}
    };
    int b[2];  // 存放最小值與最大值

    search(a, b);  // 傳遞二維陣列

    printf("%d,%d\n", b[0], b[1]);

    return 0;
}

// 修正函數：使用 `int (*a)[COL]` 來正確存取二維陣列
void search(int (*a)[COL], int *b)
{
    int i, j;
    *b = *(b + 1) = a[0][0];  // 初始化 min 和 max 為陣列的第一個值

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (a[i][j] < *b)  // 找最小值
                *b = a[i][j];
            if (a[i][j] > *(b + 1))  // 找最大值
                *(b + 1) = a[i][j];
        }
    }
}