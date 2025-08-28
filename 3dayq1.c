#include <stdio.h>
int main(){
    float celsius;

    scanf("%f", &celsius);
    float farenheit = (celsius *9/5) + 32;
    printf("Fahrenheit = %.3f\n",farenheit );
    return 0;
}