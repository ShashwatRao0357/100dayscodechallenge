#include <stdio.h>
#include <string.h>

enum Months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    char *monthNames[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    char *days[] = {"31 days", "28 or 29 days", "31 days", "30 days", "31 days", "30 days", "31 days", "31 days", "30 days", "31 days", "30 days", "31 days"};
    char input[4];
    int i, found = 0;

    printf("Enter month abbreviation (e.g., JAN): ");
    scanf("%3s", input);

    for (i = 0; i < 12; i++) {
        if (strcmp(input, monthNames[i]) == 0) {
            printf("%s\n", days[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Invalid month abbreviation\n");
        return 1;
    }
    return 0;
}
