#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

void printStudentDetails(Student *s) {
    if (s != NULL) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);
    }
}

int main() {
    Student *studentPtr = (Student *)malloc(sizeof(Student));

    if (studentPtr == NULL) {
        printf("Error: Failed to allocate memory.\n");
        return 1;
    }

    printf("Input 1:\nStudent allocated dynamically with details: Tina 105 88\n");

    strcpy(studentPtr->name, "Tina");
    studentPtr->roll = 105;
    studentPtr->marks = 88;

    printf("Output 1:\n");
    printStudentDetails(studentPtr);

    free(studentPtr);

    return 0;
}