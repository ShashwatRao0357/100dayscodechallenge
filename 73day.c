#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    printf("Enter the filename:\n");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        characters++;

        if(ch == '\n') 
            lines++;

        if(isspace(ch)) {
            if(in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }

    if(in_word) // Count last word if file doesn’t end with space/newline
        words++;

    fclose(fp);

    if(characters > 0 && lines == 0)
        lines = 1;

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}
