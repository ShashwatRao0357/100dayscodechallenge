#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    int i, j;
    bool are_distinct = true;

    // --- Read Dimensions ---
    printf("Enter the dimensions of the matrix (rows columns): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    // --- Check if it's a Square Matrix ---
    if (rows != cols) {
        printf("\n--- Output ---\n");
        printf("The matrix is not square. Diagonal elements cannot be checked for distinctness.\n");
        printf("False\n");
        return 0;
    }
    
    int size = rows; // Use 'size' for a square matrix dimension
    int matrix[size][size];
    int diagonal[size]; // Array to store diagonal elements

    // --- Read Elements and Extract Diagonal ---
    printf("\nEnter the matrix elements:\n");
    for (i = 0; i < size; i++) {
        printf("Row %d (%d values): ", i + 1, size);
        for (j = 0; j < size; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
            // Diagonal elements are where the row index (i) equals the column index (j)
            if (i == j) {
                diagonal[i] = matrix[i][j];
            }
        }
    }

    // --- Check for Distinctness in the Diagonal Array ---
    // Compare every element with every other element that follows it
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (diagonal[i] == diagonal[j]) {
                are_distinct = false;
                // Exit the loops immediately if a match is found
                i = size; 
                break; 
            }
        }
    }

    // --- Output Result ---
    printf("\n--- Output ---\n");
    if (are_distinct) {
        printf("Yes, the elements on the diagonal of the matrix are distinct\n");
    } else {
        printf("False\n");
    }

    return 0;
}