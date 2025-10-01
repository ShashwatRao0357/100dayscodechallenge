#include <stdio.h>

void insertnum(int arr[], int *n, int key) {
    int i = *n - 1; 

    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = key;

    (*n)++;
}

int main() {
    int n;
    int key;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int arr[n + 1]; 

    printf("Enter the sorted elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid element input.\n");
            return 1;
        }
    }

    printf("Enter the element to insert: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid key input.\n");
        return 1;
    }

    insertnum(arr, &n, key);

    printf("Output:\n");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");

    return 0;
}