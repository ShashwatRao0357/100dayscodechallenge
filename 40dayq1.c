#include <stdio.h>

#define MAX_SIZE 10

// Function to perform and print the diagonal traversal
void diagonalTraversal(int R, int C, int matrix[MAX_SIZE][MAX_SIZE]) {
    int total_diagonals = R + C - 1;

    printf("Diagonal Traversal: ");

    for (int s = 0; s < total_diagonals; s++) {
        
        int start_i = 0;
        int start_j = s;

        // Case 2: Diagonals starting from the last column (j=C-1) when s >= C.
        if (s >= C) {
            start_i = s - (C - 1);
            start_j = C - 1;
        }

        // Check if the current diagonal index 's' is even or odd
        if (s % 2 == 0) {
            int i = start_i;
            int j = start_j;
            while (i < R && j >= 0) {
                printf("%d ", matrix[i][j]);
                i++; 
                j--; 
            }
        } else {
            int i = start_j; 
            int j = start_i; 

            int start_row_odd = (R - 1 < s) ? (R - 1) : s;
            if (start_row_odd >= R) start_row_odd = R - 1;
            int start_col_odd = s - start_row_odd;
            if (start_col_odd >= C) { 
                start_col_odd = C - 1;
                start_row_odd = s - start_col_odd;
            }

            i = start_row_odd;
            j = start_col_odd;

            while (i >= 0 && j < C) {
                printf("%d ", matrix[i][j]);
                i--; 
                j++; 
            }
        }
    }
    printf("\n");
}

int main() {
    int R, C;

    // Read dimensions
    printf("Enter number of rows (R) and columns (C) (max 10 10): ");
    if (scanf("%d %d", &R, &C) != 2 || R <= 0 || C <= 0 || R > MAX_SIZE || C > MAX_SIZE) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    int matrix[MAX_SIZE][MAX_SIZE];

    // Read matrix elements
    printf("Enter the matrix elements (%d x %d):\n", R, C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input for matrix element.\n");
                return 1;
            }
        }
    }

    printf("\n--- Input Matrix ---\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("--------------------\n");

    // Perform traversal
    diagonalTraversal(R, C, matrix);

    return 0;
}