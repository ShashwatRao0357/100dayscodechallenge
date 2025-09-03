#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the number of odd numbers to be added: ");
    scanf("%d", &n);
    
    sum = n * n;
    
    printf("The sum of first %d natural bumbers is %d\n", n,sum);
    
    return 0;
}