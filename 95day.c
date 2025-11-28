#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

Student getTopStudent(Student students[], int n) {
    Student topper = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].marks > topper.marks) {
            topper = students[i];
        }
    }

    return topper;
}

int main() {
    const int N = 3;
    Student students[N];

    strcpy(students[0].name, "Riya"); students[0].roll = 101; students[0].marks = 89;
    strcpy(students[1].name, "Karan"); students[1].roll = 102; students[1].marks = 96;
    strcpy(students[2].name, "Meena"); students[2].roll = 103; students[2].marks = 92;

    printf("Input 1:\n");
    printf("%d students: %s %d %d, %s %d %d, %s %d %d\n", N,
           students[0].name, students[0].roll, students[0].marks,
           students[1].name, students[1].roll, students[1].marks,
           students[2].name, students[2].roll, students[2].marks);

    Student topStudent = getTopStudent(students, N);

    printf("Output 1:\n");
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topStudent.name, topStudent.roll, topStudent.marks);

    return 0;
}