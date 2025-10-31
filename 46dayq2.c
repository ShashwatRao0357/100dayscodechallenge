#include <stdio.h>
#define MAX_SIZE 100 

char repeat_char(const char *s) {
    int count[26] = {0}; 
    int i = 0;
    
    while (s[i] != '\0') {
        char cur_char = s[i];
        
        if (cur_char >= 'a' && cur_char <= 'z') {
            int index = cur_char - 'a';
            
            count[index]++;
            
            if (count[index] == 2) {
                return cur_char; 
            }
        }
        i++;
    }
    
    return '\0'; 
}

int main() {
    char in_str[MAX_SIZE];
    
    printf("Enter a lowercase string: ");
    
    if (scanf("%99s", in_str) != 1) {
        return 1;
    }

    char result = repeat_char(in_str);

    printf("\nOutput:\n");
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    
    return 0;
}