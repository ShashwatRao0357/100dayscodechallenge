#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[1000];

    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); // consume newline after filename input

    printf("Enter the text to append:\n");
    fgets(text, sizeof(text), stdin);

    fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.");
    return 0;
}
