#include <stdio.h>

int main() {
    int m, n, i, j, k;
    printf("Enter the size of the first array:");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter the elements of the first array:");
    for(i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }
    
    printf("Enter the size of the second array:");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter the elements of the second array:");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    i = 0; j = 0; k = 0;
    
    while(i < m && j < n) {
        if(nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while(i < m) {
        merged[k++] = nums1[i++];
    }
    while(j < n) {
        merged[k++] = nums2[j++];
    }

    for(i = 0; i < m + n; i++) {
        if(i != m + n - 1)
            printf("%d ", merged[i]);
        else
            printf("%d", merged[i]);
    }
    return 0;
}
