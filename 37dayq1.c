#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    printf("Enter the dimensions of the matrix (rows columns): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];
    int row_sums[rows];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        int current_row_sum = 0;
        printf("Enter the elements for Row %d (%d values separated by space): ", i + 1, cols);
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
            current_row_sum += matrix[i][j];
        }
        row_sums[i] = current_row_sum;
    }

    printf("\n--- Output ---\n");
    printf("The sum of each row is:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d Sum: %d\n", i + 1, row_sums[i]);
    }
    
    printf("\nCompact Array Output:\n");
    for (i = 0; i < rows; i++) {
        printf("%d", row_sums[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}