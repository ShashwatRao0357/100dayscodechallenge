#include <stdio.h>
#include <string.h> 
#define MAX_SIZE 100 

void rev_str(char *s) {
    int length = 0;
    int i = 0;
    char temp;

    while (s[length] != '\0') {
        length++;
    }
    
    int end = length - 1; 

    while (i < end) {
        temp = s[i];
        s[i] = s[end];
        s[end] = temp;
    
        i++;
        end--;
    }
}

int main() {
    char inp_str[MAX_SIZE];
    
    printf("Enter a string: ");
    
    if (scanf("%99s", inp_str) != 1) {
        printf("Error reading input.\n");
        return 1;
    }

    printf("Input 1:\n%s\n", inp_str);
    
    rev_str(inp_str);

    printf("Output 1:\n%s\n", inp_str);
    
    return 0;
}