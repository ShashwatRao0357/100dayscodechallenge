#include <stdio.h>
#include <string.h>

int main() {
    char binary[100]; 
    scanf("%s", binary);

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '1')
            binary[i] = '0';
        else if (binary[i] == '0')
            binary[i] = '1';
    }
    printf("%s\n", binary);
    return 0;
}
