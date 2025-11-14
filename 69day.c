#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i;
    
    printf("Enter the number of elements :\n");
    scanf("%d", &n);

    printf("The number being repeated is:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int result = 0;
    for(i = 0; i < n; i++) {
        result ^= arr[i];
    }
    for(i = 0; i < n - 1; i++) {
        result ^= i;
    }
    printf("%d", result);
    return 0;
}
