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

int areEmployeesIdentical(Employee e1, Employee e2) {
    if (e1.id != e2.id) {
        return 0;
    }

    if (e1.joiningDate.day != e2.joiningDate.day ||
        e1.joiningDate.month != e2.joiningDate.month ||
        e1.joiningDate.year != e2.joiningDate.year) {
        return 0;
    }

    if (strcmp(e1.name, e2.name) != 0) {
        return 0;
    }

    return 1;
}

void readEmployeeInput(Employee *e, const char *structName) {
    printf("Enter details for %s (Name ID Day Month Year, e.g., Raj 101 12 05 2024): ", structName);
    scanf("%49s %d %d %d %d", e->name, &e->id, &e->joiningDate.day, &e->joiningDate.month, &e->joiningDate.year);
}

int main() {
    Employee empA, empB;

    readEmployeeInput(&empA, "Employee 1");
    readEmployeeInput(&empB, "Employee 2");

    int identical = areEmployeesIdentical(empA, empB);

    printf("Output:\n");
    if (identical) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}