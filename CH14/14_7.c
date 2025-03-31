#include <stdio.h>
#include <stdlib.h>

// 插入元素函式
int *insertElement(int *arr, int item, int pos, int length) {
    // 動態配置新陣列，大小為 length + 1
    int *a = (int*)malloc((length + 1) * sizeof(int));
    if (a == NULL) {
        printf("記憶體分配失敗\n");
        exit(1);
    }

    // 插入元素
    for (int i = 0; i < length + 1; i++) {
        if (i < pos)
            a[i] = arr[i];  // 複製前面的元素
        else if (i == pos)
            a[i] = item;    // 插入新元素
        else
            a[i] = arr[i - 1]; // 原陣列元素後移
    }

    return a;  // 回傳新陣列
}

int main() {
    int num, i;
    printf("輸入陣列長度: ");
    scanf_s("%d", &num);

    int *arr=(int *)malloc(num*sizeof(int));

    printf("輸入 %d 個數字:\n", num);
    for (i = 0; i < num; i++) {
        scanf_s("%d", &arr[i]);
    }

    // 插入數字 10 在索引 2
    int *newArr = insertElement(arr, 10, 2, num);

    printf("插入後的陣列:\n");
    for (i = 0; i <= num; i++) {
        printf("%3d", newArr[i]);
    }
    printf("\n");

    // 釋放記憶體
    free(newArr);

    return 0;
}
