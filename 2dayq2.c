#include <stdio.h>

int main(){
    float radius;
    float pi = 3.145;

    scanf("%f", &radius);

    float area = pi * radius *radius;
    float circumference = 2 * pi * radius;

    printf("Area = %.2f, Circumference = %.2f\n", area, circumference);

    return 0;
}