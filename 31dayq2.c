#include <stdio.h>

int revarray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    
    return 1;
}

int parray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    int size1 = 4;
    int arr1[] = {1, 2, 3, 4};

    printf("Original array: ");
    parray(arr1, size1);

    revarray(arr1, size1);

    printf("Reversed array: ");
    parray(arr1, size1);

    return 0;
}