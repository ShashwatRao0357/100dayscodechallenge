#include <stdio.h>
#define MAX_SIZE 100 

void replace(char *s) {
    while (*s != '\0') {
        if (*s == ' ') {
            *s = '-';
        }
        s++;
    }
}

int main() {
    char inp_str[MAX_SIZE];
    
    printf("Enter a string with spaces: ");
    
    if (fgets(inp_str, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    replace(inp_str);

    printf("\nOutput:\n");
    printf("%s", inp_str);
    
    return 0;
}