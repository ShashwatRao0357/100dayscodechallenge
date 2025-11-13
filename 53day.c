#include <stdio.h>

int findindex(int nums[], int n) {
    int totalSum = 0;
    for(int i = 0; i < n; i++)
        totalSum += nums[i];
    
    int leftSum = 0;
    for(int i = 0; i < n; i++) {
        if(leftSum == totalSum - leftSum - nums[i])
            return i;
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements separated by spaces\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    int pivot = findindex(nums, n);
    printf("%d\n", pivot);
    return 0;
}
