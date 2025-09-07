#include <stdio.h>

int main() {
    int n, og, rev = 0, rem;
    scanf("%d", &n);
    og = n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (og == rev)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
