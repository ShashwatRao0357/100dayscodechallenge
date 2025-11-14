#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};
    printf("Enter string s:\n");
    scanf("%s", s);
    printf("Enter string t:\n");
    scanf("%s", t);

    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    
    printf("Anagram\n");
    return 0;
}
