#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100 

void count_vow_con(const char *s, int *vow, int *con) {
    *vow = 0;
    *con = 0;
    
    while (*s != '\0') {
        char ch = *s;
        
        ch = tolower(ch); 
        
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vow)++;
            } 
            else {
                (*con)++;
            }
        }
        
        s++;
    }
}

int main() {
    char inp_str[MAX_SIZE];
    int v_count = 0;
    int c_count = 0;
    
    printf("Enter a string: ");
    
    if (scanf("%99s", inp_str) != 1) {
        return 1;
    }

    count_vow_con(inp_str, &v_count, &c_count);

    printf("\nOutput:\n");
    printf("Vowels=%d, Consonants=%d\n", v_count, c_count);
    
    return 0;
}