#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define MAX_LINES 1000  // 假設文件中最多有1000行

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

    // 讀取每一行
    while (fgets(lines[count], MAX_LINE_LENGTH, file)) {
        int len = strlen(lines[count]);
        // 排除
        if (lines[count][len - 1] == '\n') {
            lines[count][len - 1] = '\0';
            len--;
        }

        // 冒泡排序算法
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

    // 重新以?入模式打?文件并?入排序后的?容
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


