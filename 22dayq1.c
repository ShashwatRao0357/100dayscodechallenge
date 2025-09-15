#include <stdio.h>

int factor(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, on, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    on = num;

    while (num > 0) {
        digit = num % 10;
        sum += factor(digit);
        num /= 10;
    }

    if (sum == on) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    return 0;
}
