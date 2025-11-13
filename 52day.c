#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] >= x) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, x;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted elements separated by spaces\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number x\n");
    scanf("%d", &x);
    
    int index = ceilIndex(arr, n, x);
    printf("Index of ceil is: %d\n", index);
    return 0;
}
