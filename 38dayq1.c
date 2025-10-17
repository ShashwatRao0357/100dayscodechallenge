#include <stdio.h>

int main() {
    int rows1, cols1;
    int rows2, cols2;
    int i, j;

    printf("Enter the dimensions of Matrix 1 (rows columns): ");
    if (scanf("%d %d", &rows1, &cols1) != 2 || rows1 <= 0 || cols1 <= 0) {
        return 1;
    }

    printf("Enter the dimensions of Matrix 2 (rows columns, must be %d %d): ", rows1, cols1);
    if (scanf("%d %d", &rows2, &cols2) != 2 || rows2 <= 0 || cols2 <= 0) {
        return 1;
    }

    if (rows1 != rows2 || cols1 != cols2) {
        printf("\nError: Matrices must have the same dimensions for addition.\n");
        return 1;
    }

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int sum_matrix[rows1][cols1];

    printf("\nEnter the elements for Matrix 1:\n");
    for (i = 0; i < rows1; i++) {
        printf("Row %d (%d values): ", i + 1, cols1);
        for (j = 0; j < cols1; j++) {
            if (scanf("%d", &matrix1[i][j]) != 1) {
                return 1;
            }
        }
    }

    printf("\nEnter the elements for Matrix 2:\n");
    for (i = 0; i < rows2; i++) {
        printf("Row %d (%d values): ", i + 1, cols2);
        for (j = 0; j < cols2; j++) {
            if (scanf("%d", &matrix2[i][j]) != 1) {
                return 1;
            }
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\n--- Output ---\n");
    printf("The sum of the two matrices is:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d", sum_matrix[i][j]);
            if (j < cols1 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}