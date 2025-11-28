#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    int marks;
} Student;

void findTopper(Student students[], int n) {
    if (n <= 0) {
        printf("No student data available.\n");
        return;
    }

    Student *topper = &students[0];
    int max_marks = students[0].marks;

    for (int i = 1; i < n; i++) {
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            topper = &students[i];
        }
    }

    printf("Topper: %s (Marks: %d)\n", topper->name, topper->marks);
}

int main() {
    int n;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    Student *students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        perror("Failed to allocate memory");
        return 1;
    }

    printf("Enter student data (Name ID Marks) for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%s %d %d", students[i].name, &students[i].id, &students[i].marks) != 3) {
            printf("Error reading student data for student %d. Please ensure format 'Name ID Marks'.\n", i + 1);
            free(students);
            return 1;
        }
    }

    findTopper(students, n);

    free(students);

    return 0;
}