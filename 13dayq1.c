#include <stdio.h>

int main() {
    double num1, num2;
    char operator;
    
    scanf("%lf %lf %c", &num1, &num2, &operator);
    
    switch(operator) {
        case '+':
            printf("%.0lf\n", num1 + num2);
            break;
        case '-':
            printf("%.0lf\n", num1 - num2);
            break;
        case '*':
            printf("%.0lf\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0) {
                printf("%.0lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if((int)num2 != 0) {
                printf("%d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }
    
    return 0;
}