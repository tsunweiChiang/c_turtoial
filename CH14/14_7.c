#include <stdio.h>
#include <stdlib.h>

// ���J�����禡
int *insertElement(int *arr, int item, int pos, int length) {
    // �ʺA�t�m�s�}�C�A�j�p�� length + 1
    int *a = (int*)malloc((length + 1) * sizeof(int));
    if (a == NULL) {
        printf("�O������t����\n");
        exit(1);
    }

    // ���J����
    for (int i = 0; i < length + 1; i++) {
        if (i < pos)
            a[i] = arr[i];  // �ƻs�e��������
        else if (i == pos)
            a[i] = item;    // ���J�s����
        else
            a[i] = arr[i - 1]; // ��}�C�����Ჾ
    }

    return a;  // �^�Ƿs�}�C
}

int main() {
    int num, i;
    printf("��J�}�C����: ");
    scanf_s("%d", &num);

    int *arr=(int *)malloc(num*sizeof(int));

    printf("��J %d �ӼƦr:\n", num);
    for (i = 0; i < num; i++) {
        scanf_s("%d", &arr[i]);
    }

    // ���J�Ʀr 10 �b���� 2
    int *newArr = insertElement(arr, 10, 2, num);

    printf("���J�᪺�}�C:\n");
    for (i = 0; i <= num; i++) {
        printf("%3d", newArr[i]);
    }
    printf("\n");

    // ����O����
    free(newArr);

    return 0;
}
