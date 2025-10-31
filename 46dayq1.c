#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100 

int is_vowel(char ch) {
    ch = tolower(ch); 
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1;
    }
    return 0;
}

void remove_vowels(char *s) {
    int r_index = 0; 
    int w_index = 0; 
    
    while (s[r_index] != '\0') {
        char cur_char = s[r_index];
        
        if (!is_vowel(cur_char)) {
            s[w_index] = cur_char;
            w_index++; 
        }
        
        r_index++;
    }
    
    s[w_index] = '\0';
}

int main() {
    char in_str[MAX_SIZE];
    
    printf("Enter a string: ");
    
    if (fgets(in_str, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    remove_vowels(in_str);

    printf("\nOutput:\n");
    printf("%s", in_str); 
    
    return 0;
}