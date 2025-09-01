#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    if (units <= 0) {
        printf("Invalid units consumption.\n");
    }
    else if (units <= 50) {
        bill = units * 5;
        printf("Bill: ₹%.0f\n", bill);
    }
    else if (units <= 150) {
        bill = 50 * 5 + (units - 50) * 7;
        printf("Bill: ₹%.0f\n", bill);
    }
    else if (units <= 250) {
        bill = 50 * 5 + 100 * 7 + (units - 150) * 9;
        printf("Bill: ₹%.0f\n", bill);
    }
    else {
        bill = 50 * 5 + 100 * 7 + 100 * 9 + (units - 250) * 12;
        printf("Bill: ₹%.0f\n", bill);
    }
    
    return 0;
}