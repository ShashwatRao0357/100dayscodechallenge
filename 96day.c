#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    int id;
    Date joiningDate;
} Employee;

void printEmployee(Employee e) {
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
           e.name, 
           e.id, 
           e.joiningDate.day, 
           e.joiningDate.month, 
           e.joiningDate.year);
}

int main() {
    Employee emp1;

    strcpy(emp1.name, "Raj");
    emp1.id = 11;
    emp1.joiningDate.day = 12;
    emp1.joiningDate.month = 5;
    emp1.joiningDate.year = 2020;

    printf("Input 1:\n");
    printf("Employee: %s | ID: %d | Joining Date: %02d %02d %d\n", 
           emp1.name, emp1.id, 
           emp1.joiningDate.day, emp1.joiningDate.month, emp1.joiningDate.year);

    printf("Output 1:\n");
    printEmployee(emp1);

    return 0;
}