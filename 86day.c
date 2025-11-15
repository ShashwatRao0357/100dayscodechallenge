#include <stdio.h>
#include <string.h>

enum Operation {ADD, SUBTRACT, MULTIPLY};

int main() {
    char input[10];
    int a, b, result;
    enum Operation op;

    printf("Enter operation and two numbers (e.g., ADD 10 20):\n");
    scanf("%s %d %d", input, &a, &b);

    if(strcmp(input, "ADD") == 0) {
        op = ADD;
    } else if(strcmp(input, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if(strcmp(input, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }

    switch(op) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
    }
    printf("%d\n", result);
    return 0;
}
