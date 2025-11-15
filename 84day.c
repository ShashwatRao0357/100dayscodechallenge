#include <stdio.h>
#include <string.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    char input[10];
    enum Status status;

    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    scanf("%s", input);

    if(strcmp(input, "SUCCESS") == 0) {
        status = SUCCESS;
    } else if(strcmp(input, "FAILURE") == 0) {
        status = FAILURE;
    } else if(strcmp(input, "TIMEOUT") == 0) {
        status = TIMEOUT;
    } else {
        printf("Invalid input\n");
        return 1;
    }

    switch(status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }
    return 0;
}
