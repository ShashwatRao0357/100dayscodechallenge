#include <stdio.h>

int count_charac(const char *s) {
    int count = 0;
    
    while (*s != '\0') {
        count++;
        s++;
    }
    
    return count;
}

int main() {
    const char *str1 = "Hello";
    int l1 = count_charac(str1);
    printf("Input 1: \"%s\"\nOutput 1: %d\n\n", str1, l1);

    const char *str2 = " ";
    int l2 = count_charac(str2);
    printf("Input 2: \"%s\"\nOutput 2: %d\n", str2, l2);
    
    return 0;
}