#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], greater[n];

    printf("Enter %d elements:", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        greater[i] = -1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                greater[i] = arr[j];
                break;
            }
        }
    }

    printf("Next greater elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d", greater[i]);
        if(i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
