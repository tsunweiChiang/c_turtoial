#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define MAX_LINES 1000  // ���]��󤤳̦h��1000��

int main() {
	//11.1
	printf("11.1\n");
    FILE *file = fopen("input.txt", "r");
    char lines[MAX_LINES][MAX_LINE_LENGTH];
    int count = 0;

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Ū���C�@��
    while (fgets(lines[count], MAX_LINE_LENGTH, file)) {
        int len = strlen(lines[count]);
        // �ư�
        if (lines[count][len - 1] == '\n') {
            lines[count][len - 1] = '\0';
            len--;
        }

        // �_�w�ƧǺ�k
        for (int i = 0; i < len - 1; i++) {
            for (int j = 0; j < len - i - 1; j++) {
                if (lines[count][j] > lines[count][j + 1]) {
                    char temp = lines[count][j];
                    lines[count][j] = lines[count][j + 1];
                    lines[count][j + 1] = temp;
                }
            }
        }
        count++;
    }
    fclose(file);

    // ���s�H?�J�Ҧ���?���}?�J�ƧǦZ��?�e
    file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s\n", lines[i]);
    }

    fclose(file);
    printf("DONE!\n");
    //11.2
    printf("11.2\n");
    return 0;
}


