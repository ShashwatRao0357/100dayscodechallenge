#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter the string:");
    scanf("%s", s);
    int n = strlen(s);
    int max_len = 0, start = 0;
    int last_index[256];
    
    for(int i = 0; i < 256; i++)
        last_index[i] = -1;
    
    for(int i = 0; i < n; i++) {
        if(last_index[(unsigned char)s[i]] >= start) {
            start = last_index[(unsigned char)s[i]] + 1;
        }
        last_index[(unsigned char)s[i]] = i;
        if(i - start + 1 > max_len)
            max_len = i - start + 1;
    }
    
    printf("%d\n", max_len);
    return 0;
}
