#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100 

void count_chars(const char *s, int *spaces, int *digits, int *special) {
    *spaces = 0;
    *digits = 0;
    *special = 0;
    
    while (*s != '\0') {
        char ch = *s;
        
        if (isspace(ch)) {
            (*spaces)++;
        } else if (isdigit(ch)) {
            (*digits)++;
        } else if (isalpha(ch)) {
        } else {
            (*special)++;
        }
        
        s++;
    }
}

int main() {
    char input_string[MAX_SIZE];
    int space_count = 0;
    int digit_count = 0;
    int special_count = 0;
    
    printf("Enter a string: ");
    
    if (fgets(input_string, MAX_SIZE, stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    count_chars(input_string, &space_count, &digit_count, &special_count);

    printf("\nOutput:\n");
    printf("Spaces=%d, Digits=%d, Special=%d\n", space_count, digit_count, special_count);
    
    return 0;
}