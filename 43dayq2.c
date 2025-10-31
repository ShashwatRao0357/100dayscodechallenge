#include <stdio.h>
#define MAX_SIZE 100 

int is_palindrome(const char *s) {
    int length = 0;
    
    while (s[length] != '\0') {
        length++;
    }
    
    int start = 0;
    int end = length - 1; 
    
    while (start < end) {
        if (s[start] != s[end]) {
            return 0; 
        }
        
        start++;
        end--;
    }

    return 1;
}

int main() {
    char input_string[MAX_SIZE];
    
    printf("Enter a string: ");
    
    if (scanf("%99s", input_string) != 1) {
        return 1;
    }

    if (is_palindrome(input_string)) {
        printf("\nOutput:\nPalindrome\n");
    } else {
        printf("\nOutput:\nNot palindrome\n");
    }
    
    return 0;
}