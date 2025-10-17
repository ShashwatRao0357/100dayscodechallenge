#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for Matrix 1
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    int A[r1][c1];

    // Input dimensions for Matrix 2
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    int B[r2][c2];

    // Check for compatibility
    if (c1 != r2) {
        printf("Error! Cannot multiply: Number of columns of first matrix is not equal to number of rows of second matrix.\n");
        return 0;
    }

    // Input elements for Matrix 1
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) {
            printf("Enter element A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }

    // Input elements for Matrix 2
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) {
            printf("Enter element B[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }

    // Matrix multiplication
    int result[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display output
    printf("The result after multiplication is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
