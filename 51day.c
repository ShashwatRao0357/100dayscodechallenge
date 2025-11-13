#include <stdio.h>

int firstOccur(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(nums[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if(nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int lastOccur(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(nums[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if(nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, target;
    printf("Enter the number of numbers you want to input:");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the numbers separated by spaces:");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("Target number:");
    scanf("%d", &target);
    
    int first = firstOccur(nums, n, target);
    int last = lastOccur(nums, n, target);
    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);
    return 0;
}
