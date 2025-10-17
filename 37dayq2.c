#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    printf("Enter the dimensions of the matrix (rows columns): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];
    int transpose[cols][rows];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        printf("Enter the elements for Row %d (%d values separated by space): ", i + 1, cols);
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\n--- Output ---\n");
    printf("The original matrix dimensions are %d x %d.\n", rows, cols);
    printf("The transpose matrix (%d x %d) is:\n", cols, rows);

    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d", transpose[i][j]);
            if (j < rows - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}