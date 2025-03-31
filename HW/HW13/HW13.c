#include <stdio.h>
#include <stdlib.h>

// �禡�쫬�ŧi
void bubbleSortRecursive(int arr[], int n);
void swap(int *xp, int *yp);
int binarySearchRecursive(int arr[], int l, int r, int x);

// �D�禡
int main() {
    FILE *file, *sortedFile;
    int arr[100], count = 0, x, result;

    // Ū�� test.txt �ɮ�
    file = fopen("test.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    while (fscanf(file, "%d", &arr[count]) == 1) {
        count++;
    }
    fclose(file);

    // �i��w�j�Ƨ�
    bubbleSortRecursive(arr, count);

    // �N�Ƨǵ��G�g�J sorted.txt �ÿ�X�챱��x
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

    // �i��G���j�M
    printf("Enter a number to search: ");
    scanf("%d", &x);
    result = binarySearchRecursive(arr, 0, count - 1, x);

    if (result == -1)
        printf("Element not present in the array\n");
    else
        printf("Element found at index %d\n", result);

    return EXIT_SUCCESS;
}

// ���j�w�j�ƧǨ禡
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

// �洫����ܼƪ���
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// ���j�G���j�M�禡
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
