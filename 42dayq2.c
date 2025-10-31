#include <stdio.h>
#define MAX_SIZE 100 

void uppercase(char *s) {
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z') {
            *s = *s - 32;
        }
        s++;
    }
}

int main() {
    char inp_str[MAX_SIZE];
    
    printf("Enter a lowercase string: ");
    
    if (scanf("%99s", inp_str) != 1) {
        printf("Error reading input.\n");
        return 1;
    }

    uppercase(inp_str);

    printf("\nOutput:\n");
    printf("%s\n", inp_str);
    
    return 0;
}