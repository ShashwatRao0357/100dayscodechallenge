#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n;
    int pos;
    int i;

    // Read initial size
    scanf("%d", &n);

    // Read elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position (treated as 0-based index)
    scanf("%d", &pos);

    // Check bounds
    if (pos < 0 || pos >= n) {
        return 1;
    }

    // Shift elements one position to the left
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the array size counter
    n--;

    // Print the final array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}