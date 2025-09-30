#include <stdio.h>

#define MAX_SIZE 100

int mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i, j;
    for (i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    for (j = 0; j < size2; j++) {
        result[size1 + j] = arr2[j];
    }
    return size1 + size2;
}

int printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int result[MAX_SIZE * 2]; // Ensure enough space for the merged array
    int size1, size2, mergedSize, i;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter elements of first array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter elements of second array: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergedSize = mergeArrays(arr1, size1, arr2, size2, result);

    printf("Merged array: ");
    printArray(result, mergedSize);

    return 0;
}