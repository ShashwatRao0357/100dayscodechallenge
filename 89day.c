#include <stdio.h>

enum Status {
    SUCCESS,  
    FAILURE,  
    TIMEOUT   
};

int main() {
    // Print the value of each enumerator
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);

    return 0;
}