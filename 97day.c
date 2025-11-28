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
    const char *filename = "employee.dat";
    Employee emp1;
    FILE *fp;

    strcpy(emp1.name, "Raj");
    emp1.id = 11;
    emp1.joiningDate.day = 12;
    emp1.joiningDate.month = 5;
    emp1.joiningDate.year = 2020;

    // Writing the structure to a binary file
    fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    fwrite(&emp1, sizeof(Employee), 1, fp);
    fclose(fp);
    
    printf("Input 1:\nEmployee details entered and stored in file.\n");
    printf("\n--- Reading Data from Binary File ---\n");

    // Reading the structure from the binary file
    Employee emp2;
    fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    if (fread(&emp2, sizeof(Employee), 1, fp) == 1) {
        printf("Output 1:\nDisplays employee data read from file.\n");
        printEmployee(emp2);
    } else {
        printf("Error: Could not read data from file.\n");
    }

    fclose(fp);

    return 0;
}