#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name: %sAge: %d\n", name, age);  
    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
