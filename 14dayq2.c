#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the number of even numbers to be added: ");
    scanf("%d", &n);
    
    sum = (n*n +n);
    
    printf("The sum of first %d even natural bumbers is %d\n", n,sum);
    
    return 0;
}