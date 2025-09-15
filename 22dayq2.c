#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 1;
    int denom = 2;

    for (int i = 1; i <= n; i++) {
        sum += (float)num / denom;
        num += 2;  
        denom += 2; 
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
