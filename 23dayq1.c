#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int num = 2;
    int denom = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)num / denom;
        num += 2;   
        denom += 4; 
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
