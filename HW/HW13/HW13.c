#include <stdio.h>
#include <stdlib.h>

// 函式原型宣告
void bubbleSortRecursive(int arr[], int n);
void swap(int *xp, int *yp);
int binarySearchRecursive(int arr[], int l, int r, int x);

// 主函式
int main() {
    FILE *file, *sortedFile;
    int arr[100], count = 0, x, result;

    // 讀取 test.txt 檔案
    file = fopen("test.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    while (fscanf(file, "%d", &arr[count]) == 1) {
        count++;
    }
    fclose(file);

    // 進行泡沫排序
    bubbleSortRecursive(arr, count);

    // 將排序結果寫入 sorted.txt 並輸出到控制台
    sortedFile = fopen("sorted.txt", "w");
    if (sortedFile == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    printf("Sorted Array:\n");
    for (int i = 0; i < count; i++) {
        fprintf(sortedFile, "%d\n", arr[i]);
        printf("%d\n", arr[i]);
    }
    fclose(sortedFile);

    // 進行二分搜尋
    printf("Enter a number to search: ");
    scanf("%d", &x);
    result = binarySearchRecursive(arr, 0, count - 1, x);

    if (result == -1)
        printf("Element not present in the array\n");
    else
        printf("Element found at index %d\n", result);

    return EXIT_SUCCESS;
}

// 遞迴泡沫排序函式
void bubbleSortRecursive(int arr[], int n) {
    if (n == 1)
        return;
    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }
    bubbleSortRecursive(arr, n - 1);
}

// 交換兩個變數的值
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// 遞迴二分搜尋函式
int binarySearchRecursive(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearchRecursive(arr, l, mid - 1, x);
        return binarySearchRecursive(arr, mid + 1, r, x);
    }
    return -1;
}
