#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        printf("Enter name, roll number and marks for student %d:\n", i+1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    printf("\nReading from file:\n");
    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);

    return 0;
}
