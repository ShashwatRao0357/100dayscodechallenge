#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of elements to be input in array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements (seperated by spaces):");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        int found = -1;
        for(j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                found = arr[j];
                break;
            }
        }
        if(i == n - 1)
            printf("%d", found);
        else
            printf("%d, ", found);
    }
    return 0;
}
