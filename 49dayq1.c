#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, 100, stdin);
    int i = 0;

    // Print the first initial
    printf("%c.", toupper(name[i]));
    // Move to next character after first word
    while (name[i] != ' ' && name[i] != '\0') i++;
    i++; // Skip space

    // Loop for the rest of the name
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        }
        i++;
    }
    printf("\n");
    return 0;
}
