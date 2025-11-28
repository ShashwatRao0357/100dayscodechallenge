#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

void printStudent(Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    Student student1;

    strcpy(student1.name, "Neha"); 
    
    student1.roll = 104;
    student1.marks = 92;

    printf("Input 1:\nStudent: %s %d %d\n", student1.name, student1.roll, student1.marks);
    
    printf("Output 1:\n");
    printStudent(student1);

    Student student2;
    strcpy(student2.name, "Ankit");
    student2.roll = 105;
    student2.marks = 85;

    printf("\nInput 2:\nStudent: %s %d %d\n", student2.name, student2.roll, student2.marks);
    
    printf("Output 2:\n");
    printStudent(student2);

    return 0;
}