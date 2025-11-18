#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    char name[50];
    Gender gender;
} Person;

Gender string_to_gender(char *genderStr) {
    char upperStr[50];
    strcpy(upperStr, genderStr);
    for(int i = 0; upperStr[i]; i++){
      upperStr[i] = toupper(upperStr[i]);
    }

    if (strcmp(upperStr, "MALE") == 0) {
        return MALE;
    } else if (strcmp(upperStr, "FEMALE") == 0) {
        return FEMALE;
    } else {
        return OTHER;
    }
}

void print_gender(Gender g) {
    switch (g) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Unknown Gender\n");
            break;
    }
}

int main() {
    char input_str[50];
    Person p;

    printf("Enter Gender (e.g., MALE or FEMALE): ");
    
    if (scanf("%49s", input_str) != 1) {
        return 1;
    }
    
    p.gender = string_to_gender(input_str);

    print_gender(p.gender);

    return 0;
}