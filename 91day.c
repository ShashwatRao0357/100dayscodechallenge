#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = 0;

    printf("Enter Roll: ");
    if (scanf("%d", &s1.roll_no) != 1) {
        return 1;
    }

    printf("Enter Marks: ");
    if (scanf("%f", &s1.marks) != 1) {
        return 1;
    }

    printf("\nStudent Data:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s1.name, s1.roll_no, s1.marks);

    return 0;
}