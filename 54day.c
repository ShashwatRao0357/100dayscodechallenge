#include <stdio.h>

int main() {
    int n, x = -1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int total_sum = n * (n + 1) / 2;
    int left_sum = 0;

    for (int i = 1; i <= n; i++) {
        left_sum += i;
        int right_sum = total_sum - left_sum + i;
        if (left_sum == right_sum) {
            x = i;
            break;
        }
    }

    printf("%d\n", x);

    return 0;
}
