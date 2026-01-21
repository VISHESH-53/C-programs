#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int matrix1[3][3];
    int matrix2[3][3];
    int sum_matrix[3][3];
    int product_matrix[3][3];
    int transpose_matrix[3][3];

    printf("Enter elements of Matrix 1:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nMatrix 1:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of Matrix 2:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nMatrix 2:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nSum of Matrix 1 and Matrix 2:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            product_matrix[i][j] = 0;
            for(int k = 0; k < cols; k++) {
                product_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nProduct of Matrix 1 and Matrix 2:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", product_matrix[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose_matrix[j][i] = matrix1[i][j];
        }
    }

    printf("\nTranspose of Matrix 1:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d ", transpose_matrix[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose_matrix[j][i] = matrix2[i][j];
        }
    }

    printf("\nTranspose of Matrix 2:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d ", transpose_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}