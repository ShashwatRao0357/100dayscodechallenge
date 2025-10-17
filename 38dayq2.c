#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    int i, j;
    // Assume symmetric until proven otherwise
    bool is_symmetric = true; 

    // --- Read Dimensions ---
    printf("Enter the dimensions of the matrix (rows columns): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    // --- Check if it's a Square Matrix ---
    if (rows != cols) {
        printf("\n--- Output ---\n");
        printf("The matrix is not square. Therefore, it is False (not symmetric).\n");
        return 0;
    }

    int matrix[rows][cols];

    // --- Read Elements and Check Symmetry ---
    printf("\nEnter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d (%d values): ", i + 1, cols);
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }
    
    // Check condition A[i][j] == A[j][i]
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = false;
                // Once a non-matching pair is found, we can stop
                i = rows; 
                break; 
            }
        }
    }

    // --- Output Result ---
    printf("\n--- Output ---\n");
    if (is_symmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}