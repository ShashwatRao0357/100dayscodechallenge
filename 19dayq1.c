#include <stdio.h>

int gcd(int a, int b) {
    int i, gcd = 1;
    int min = (a < b) ? a : b;
    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int n1, n2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int grc = gcd(n1, n2);
    lcm = (n1 * n2) / grc;

    printf("%d\n", lcm);

    return 0;
}
