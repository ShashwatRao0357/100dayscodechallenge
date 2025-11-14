#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements(space separated):");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int expected_sum = n*(n+1)/2;
    int actual_sum = 0;
    for(i = 0; i < n; i++) {
        actual_sum += arr[i];
    }
    printf("%d", expected_sum - actual_sum);
    return 0;
}
