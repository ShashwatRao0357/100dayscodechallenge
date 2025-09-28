#include <stdio.h>

int main() {
    int n, key, f_i = -1;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key); 

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            f_i = i; 
            break;
        }
    }

    if (f_i != -1)
        printf("Found at index %d\n", f_i);
    else
        printf("-1\n");

    return 0;
}
