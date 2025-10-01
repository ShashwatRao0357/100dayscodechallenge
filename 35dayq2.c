#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n;
    int k;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    if (n == 0 || k == 0) {
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }

    int temp[MAX_SIZE];

    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}