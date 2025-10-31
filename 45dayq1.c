#include <stdio.h>
#define MAX_SIZE 100 

int count_char_freq(const char *s, char target) {
    int count = 0;
    
    while (*s != '\0') {
        if (*s == target) {
            count++;
        }
        s++;
    }
    
    return count;
}

int main() {
    char inp_str[MAX_SIZE];
    char target_char;
    
    printf("Enter a string: ");
    
    if (scanf("%99s", inp_str) != 1) {
        printf("Error reading string.\n");
        return 1;
    }
    
    printf("Enter the character to count: ");
    
    if (scanf(" %c", &target_char) != 1) {
        printf("Error reading character.\n");
        return 1;
    }
    
    int frequency = count_char_freq(inp_str, target_char);

    printf("\nOutput:\n");
    printf("%d\n", frequency);
    
    return 0;
}