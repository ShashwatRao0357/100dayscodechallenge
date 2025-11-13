#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int candidate = -1, count = 0;
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate) count++;
    }

    if(count > n/2) {
        printf("The majority element is: %d\n", candidate);
    } else {
        printf("No majority element exists (print -1): -1\n");
    }

    return 0;
}
