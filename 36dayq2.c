#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int sum = 0;

    printf("Enter the dimensions of the matrix (rows columns, e.g., 2 3): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid or non-positive dimensions entered.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        printf("Enter the elements for Row %d (%d values separated by space): ", i + 1, cols);
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid element input.\n");
                return 1;
            }
            sum += matrix[i][j];
        }
    }

    printf("\n--- Output ---\n");
    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}