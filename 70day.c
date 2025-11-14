#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    
    int i = 0;
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = toupper(str[i]);
    }
    i++;
    while (str[i] != '\0') {
        if (str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]);
        }
        i++;
    }
    printf("%s", str);
    return 0;
}
