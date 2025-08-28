#include <Stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = num1+num2;
    int sub = num1-num2;
    int mul = num1*num2;
    int div = num1/num2;
    
    printf("Sum=%d, Diff=%d, Product = %d, Quotient = %d\n", sum, sub, mul, div);

    return 0;
}