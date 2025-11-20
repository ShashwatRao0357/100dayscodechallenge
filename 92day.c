#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    
    printf("--- Enter Details for 5 Students ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        
        printf("Enter Name: ");
        if (fgets(students[i].name, sizeof(students[i].name), stdin) == NULL) {
            return 1;
        }
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Enter Roll: ");
        if (scanf("%d", &students[i].roll_no) != 1) {
            return 1;
        }

        printf("Enter Marks: ");
        if (scanf("%f", &students[i].marks) != 1) {
            return 1;
        }
    }

    printf("\n--- Details of All Students ---\n");
    printf("+----------------------+----------+---------+\n");
    printf("| Name                 | Roll No. | Marks   |\n");
    printf("+----------------------+----------+---------+\n");

    for (i = 0; i < 5; i++) {
        printf("| %-20s | %-8d | %-7.2f |\n", 
               students[i].name, 
               students[i].roll_no, 
               students[i].marks);
    }
    printf("+----------------------+----------+---------+\n");

    return 0;
}