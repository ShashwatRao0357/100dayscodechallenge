#include <stdio.h>

int main() {
    int n, k, i, j, first_neg;
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
        // Find first negative integer in the subarray
        first_neg = 0;
        for(j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                first_neg = arr[j];
                break;
            }
        }
        printf("-> %d\n", first_neg);
    }
    return 0;
}
