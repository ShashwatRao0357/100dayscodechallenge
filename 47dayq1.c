#include <stdio.h>
#define MAX_SIZE 100 

int anagrams(const char *s1, const char *s2) {
    int count[26] = {0}; 
    int i = 0;
    
    int len1 = 0;
    while (s1[len1] != '\0') {
        len1++;
    }
    int len2 = 0;
    while (s2[len2] != '\0') {
        len2++;
    }
    
    if (len1 != len2) {
        return 0;
    }

    i = 0;
    while (s1[i] != '\0') {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            count[s1[i] - 'a']++;
        }
        i++;
    }

    i = 0;
    while (s2[i] != '\0') {
        if (s2[i] >= 'a' && s2[i] <= 'z') {
            count[s2[i] - 'a']--;
        }
        i++;
    }
    
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE];
    
    printf("Enter first string: ");
    if (scanf("%99s", str1) != 1) return 1;
    
    printf("Enter second string: ");
    if (scanf("%99s", str2) != 1) return 1;

    if (anagrams(str1, str2)) {
        printf("\nOutput:\nAnagrams\n");
    } else {
        printf("\nOutput:\nNot anagrams\n");
    }
    
    return 0;
}