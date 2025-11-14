#include <stdio.h>

int main() {
    int n, k, i, j;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:(space seperated):");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k:");
    scanf("%d", &k);
    int max_sum = 0, current_sum;
    for(i = 0; i <= n - k; i++) {
        current_sum = 0;
        for(j = i; j < i + k; j++) {
            current_sum += arr[j];
        }
        if(i == 0 || current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("%d\n", max_sum);
    return 0;
}
