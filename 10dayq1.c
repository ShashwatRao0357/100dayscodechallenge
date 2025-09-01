#include <stdio.h>

void main1(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("invalid triangle side lengths given (sides must be positive)\n");
        return;
    }
    
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle side lenths are given (sum of any two sides must be greater than the third)\n");
        return;
    }
    
    if (a == b && b == c) {
        printf("It is an equilateral triangle\n");
    }
    else if (a == b || a == c || b == c) {
        printf("It is an isosceles triangle\n");
    }
    else {
        printf("It is a scalene triangle\n");
    }
}

int main() {
    float a, b, c;
    
    printf("Enter three side lengths for the triangle (separated by spaces): ");
    
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter numeric values.\n");
        return 1;
    }
    
    main1(a, b, c);
    
    return 0;
}