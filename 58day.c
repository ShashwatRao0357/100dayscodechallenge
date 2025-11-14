#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements(space seperated):");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int answer[n];
    for(i = 0; i < n; i++) {
        int prod = 1;
        for(j = 0; j < n; j++) {
            if(j != i) {
                prod *= nums[j];
            }
        }
        answer[i] = prod;
    }
    printf("[");
    for(i = 0; i < n; i++) {
        if(i == n - 1)
            printf("%d", answer[i]);
        else
            printf("%d,", answer[i]);
    }
    printf("]\n");
    return 0;
}
