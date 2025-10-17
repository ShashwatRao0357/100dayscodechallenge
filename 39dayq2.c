#include <stdio.h>

int main() {
    int size;
    int sum = 0; 

    // 1. Get the size of the square matrix from the user
    printf("Enter the size of the square matrix: ");
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows != cols) {
        size = rows; 
    } else {
        size = rows;
    }
    
    // Check if the size is positive
    if (size <= 0) {
        printf("Matrix size must be positive.\n");
        return 1;
    }

    // Declare the matrix
    int matrix[size][size];

    // 2. Get the matrix elements from the user
    printf("Enter the elements of the %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input for matrix element.\n");
                return 1; 
            }
        }
    }

    // 3. Calculate the sum of the main diagonal elements
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; 
    }

    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}