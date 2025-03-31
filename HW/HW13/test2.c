#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

int numbers[SIZE];

int isUnique(int num, int size) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == num) {
            return 0; // Number is not unique
        }
    }
    return 1; // Number is unique
}

void generateNumber() {
    srand(time(NULL)); // Seed the random number generator

    FILE *file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        int num;
        do {
            num = (rand() % (10000 - 1000 + 1)) + 1000;
        } while (!isUnique(num, i)); // Ensure uniqueness by checking all previous numbers

        numbers[i] = num;
        fprintf(file, "%d\n", num);
    }

    fclose(file);
}


void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSortRecursive(int n) {
    if (n == 1) return;

    for (int i = 0; i < n-1; i++) {
        if (numbers[i] > numbers[i+1]) {
            swap(&numbers[i], &numbers[i+1]);
        }
    }

    bubbleSortRecursive(n - 1);
}

int binarySearchRecursive(int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (numbers[mid] == x) return mid;

        if (numbers[mid] > x) return binarySearchRecursive(l, mid - 1, x);

        return binarySearchRecursive(mid + 1, r, x);
    }

    return -1;
}

int main() {
    generateNumber();

    // Read the generated numbers back into the array
    FILE *file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return -1;
    }
    for (int i = 0; i < SIZE; i++) {
        fscanf(file, "%d", &numbers[i]);
    }
    fclose(file);

    bubbleSortRecursive(SIZE);

    // Write sorted numbers to sorted.txt and print them
    file = fopen("sorted.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return -1;
    }
    for (int i = 0; i < SIZE; i++) {
        fprintf(file, "%d\n", numbers[i]);
        printf("%d\n", numbers[i]);
    }
    fclose(file);

    int number;
    printf("Enter a number to search: ");
    scanf("%d", &number);

    int result = binarySearchRecursive(0, SIZE - 1, number);
    if (result == -1)
        printf("Number not found.\n");
    else
        printf("Number found at index: %d\n", result+1);

    return 0;
}

