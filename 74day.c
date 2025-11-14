#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[100];
    char destFile[100];
    int ch;

    printf("Enter the source filename: ");
    scanf("%s", sourceFile);
    printf("Enter the destination filename: ");
    scanf("%s", destFile);

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error creating destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destFile);
    return 0;
}
