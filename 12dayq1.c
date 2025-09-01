#include <stdio.h>

int main() {
    int lateDay;
    float fine = 0;
    
    printf("Enter number of days late: ");
    scanf("%d", &lateDay);
    
    if (lateDay <= 0) {
        printf("No fine. Book returned on time.\n");
    }
    else if (lateDay <= 5) {
        // ₹2 per day for first 5 days
        fine = lateDay * 2;
        printf("Fine ₹%.0f\n", fine);
    }
    else if (lateDay <= 10) {
        // ₹4 per day for next 5 days (days 6-10)
        fine = 5 * 2 + (lateDay - 5) * 4;
        printf("Fine ₹%.0f\n", fine);
    }
    else if (lateDay <= 30) {
        // ₹6 per day for remaining days (days 11-30)
        fine = 5 * 2 + 5 * 4 + (lateDay - 10) * 6;
        printf("Fine ₹%.0f\n", fine);
    }
    else {
        // More than 30 days - membership cancelled
        printf("Membership Cancelled\n");
    }
    
    return 0;
}