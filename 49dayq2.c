#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = 0;  

    int len = strlen(name);
    int i = 0;
    
    // Print initials of all except last word
    while (i < len) {
        if (i == 0 || (name[i-1] == ' ' && name[i] != ' ')) {
            int j = i;
            while (j < len && name[j] != ' ') j++;
            if (j == len) break;  // Last word start, stop printing initials
            printf("%c.", toupper(name[i]));
        }
        i++;
    }

    printf(" ");

    // Print the full last word 
    i = len - 1;
    while (i >= 0 && name[i] != ' ') i--;
    printf("%s\n", name + i + 1);

    return 0;
}
