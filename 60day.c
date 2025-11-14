#include <stdio.h>

int main() {
    int n, k, i, j, max;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements(space seperated):");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k:");
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++) {
        // Print the subarray
        for(j = i; j < i + k; j++) {
            printf("%d ", arr[j]);
        }
        // Find the maximum in the subarray
        max = arr[i];
        for(j = i + 1; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }
        printf("-> %d\n", max);
    }
    return 0;
}
