#include <stdio.h>
#include <string.h>

void rev(char *start, char *end) {
    while (start < end) {
        char t = *start;
        *start++ = *end;
        *end-- = t;
    }
}

int main() {
    char s[201];
    fgets(s, 201, stdin);
    s[strcspn(s, "\n")] = 0;
    int i = 0, n = strlen(s);
    while (i < n) {
        while (i < n && s[i] == ' ') i++;
        int j = i;
        while (j < n && s[j] != ' ') j++;
        rev(s + i, s + j - 1);
        i = j;
    }
    printf("%s\n", s);
    return 0;
}
