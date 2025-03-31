#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MATRIX_SIZE 16
#define BIAS_SIZE 14
#define KERNEL_SIZE 3

void generate(){
    FILE *fptr;
    int i, j;
    
    // �ͦ��ÿ�X�H���Ʀr�x�}
    fptr = fopen("Matrix.txt", "w");
    printf("Matrix:\n");
    srand(5);
    for (i = 0; i < MATRIX_SIZE; i++){
        for (j = 0; j < MATRIX_SIZE; j++){
            int num = rand() % 21 - 10; // �H���� -10 �� +10
            fprintf(fptr, "%5d ", num);
            printf("%5d ", num);
        }
        fprintf(fptr, "\n");
        printf("\n");
    }
    fclose(fptr);

    // �ͦ��ÿ�X���m�x�}
    fptr = fopen("Bias.txt", "w");
    printf("Bias:\n");
    for (i = 0; i < BIAS_SIZE; i++){
        for (j = 0; j < BIAS_SIZE; j++){
            fprintf(fptr, "1 ");
            printf("1 ");
        }
        fprintf(fptr, "\n");
        printf("\n");
    }
    fclose(fptr);
}  

void convolutional(){
    FILE *fmatrix, *fbias, *fkernel, *fconv;
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    float kernel[KERNEL_SIZE][KERNEL_SIZE]; // kernel ���B�I��
    int bias[BIAS_SIZE][BIAS_SIZE];
    int conv[BIAS_SIZE][BIAS_SIZE];
    int i, j, m, n;
    float sum;

    // Ū�� Matrix.txt
    fmatrix = fopen("Matrix.txt", "r");
    for (i = 0; i < MATRIX_SIZE; i++)
        for (j = 0; j < MATRIX_SIZE; j++)
            fscanf(fmatrix, "%5d", &matrix[i][j]);
    fclose(fmatrix);

    // Ū�� Kernel.txt
    fkernel = fopen("Kernel.txt", "r");
    for (i = 0; i < KERNEL_SIZE; i++)
        for (j = 0; j < KERNEL_SIZE; j++)
            fscanf(fkernel, "%f", &kernel[i][j]);
    fclose(fkernel);

    // Ū�� Bias.txt
    fbias = fopen("Bias.txt", "r");
    for (i = 0; i < BIAS_SIZE; i++)
        for (j = 0; j < BIAS_SIZE; j++)
            fscanf(fbias, "%d", &bias[i][j]);
    fclose(fbias);

    // ���n�ާ@�ÿ�X���G
    printf("Conv:\n");
    fconv = fopen("Conv.txt", "w");
    for (i = 0; i < BIAS_SIZE; i++){
        for (j = 0; j < BIAS_SIZE; j++){
            sum = 0.0f;
            for (m = 0; m < KERNEL_SIZE; m++){
                for (n = 0; n < KERNEL_SIZE; n++){
                    sum += matrix[i + m][j + n] * kernel[m][n];
                }
            }
            conv[i][j] = round(sum) + bias[i][j]; // �|�ˤ��J��[�W���m
            fprintf(fconv, "%5d ", conv[i][j]);
            printf("%5d ", conv[i][j]);
        }
        fprintf(fconv, "\n");
        printf("\n");
    }
    fclose(fconv);
}

void relu(){
    FILE *fconv, *fresult;
    int conv[BIAS_SIZE][BIAS_SIZE];
    int result[BIAS_SIZE][BIAS_SIZE];
    int i, j;

    // Ū�� Conv.txt
    fconv = fopen("Conv.txt", "r");
    for (i = 0; i < BIAS_SIZE; i++)
        for (j = 0; j < BIAS_SIZE; j++)
            fscanf(fconv, "%5d", &conv[i][j]);
    fclose(fconv);

    // ���� ReLU ��ƨÿ�X���G
    printf("Result after ReLU:\n");
    fresult = fopen("Result.txt", "w");
    for (i = 0; i < BIAS_SIZE; i++){
        for (j = 0; j < BIAS_SIZE; j++){
            result[i][j] = conv[i][j] > 0 ? conv[i][j] : 0;
            fprintf(fresult, "%5d ", result[i][j]);
            printf("%5d ", result[i][j]);
        }
        fprintf(fresult, "\n");
        printf("\n");
    }
    fclose(fresult);
}

int main(){
    generate();
    convolutional();
    relu();
    return 0;
}

