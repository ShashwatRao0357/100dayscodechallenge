#include <stdio.h>
#define MAX_SIZE 100 

void print_ver(const char *s) {
    while (*s != '\0') {
        printf("%c\n", *s);
        
        s++;
    }
}

int main() {
    char inp_str[MAX_SIZE];
    
    printf("Enter a string: ");
    
    if (scanf("%99s", inp_str) != 1) {
        return 1;
    }

    printf("\nOutput:\n");
    print_ver(inp_str);
    
    return 0;
}