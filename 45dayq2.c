#include <stdio.h>
#define MAX_SIZE 100 

void toggle_case(char *s) {
    while (*s != '\0') {
        
        if (*s >= 'A' && *s <= 'Z') {
            *s = *s + 32;
        }
        else if (*s >= 'a' && *s <= 'z') {
            *s = *s - 32;
        }
        
        s++;
    }
}

int main() {
    char inp_str[MAX_SIZE];
    
    printf("Enter a string: ");
    
    if (fgets(inp_str, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    toggle_case(inp_str);

    printf("\nOutput:\n");
    printf("%s", inp_str); 
    
    return 0;
}