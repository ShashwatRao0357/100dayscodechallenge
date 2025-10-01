#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int i;
    
    scanf("%d", &n);

    if (n < 2) {
        return 1;
    }

    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int seclargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            seclargest = largest;
            largest = arr[i];
        } else if (arr[i] > seclargest && arr[i] != largest) {
            seclargest = arr[i];
        }
    }

    if (seclargest == INT_MIN) {
        return 1; 
    }

    printf("%d\n", seclargest);

    return 0;
}