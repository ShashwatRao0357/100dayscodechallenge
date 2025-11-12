#include <stdio.h>
#include <string.h>

int rotation(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) return 0;
    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);
    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[10], s2[10];
    scanf("%s%s", s1, s2);
    if (rotation(s1, s2))
        printf("It is rotation of another string\n");
    else
        printf("It's not a rotation of another string\n");
    return 0;
}
