#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            for (int k = i; k < i + j; k++)
                printf("%c", s[k]);
            if (i == len - 1 && j == len - i)
                printf("\n");
            else
                printf(",");
        }
    }
    return 0;
}
