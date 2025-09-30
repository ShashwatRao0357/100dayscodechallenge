#include <stdio.h>

int freqdigit(long long n) {
    int count[10] = {0}; 
    long long number = n; 
    
    if (number == 0) {
        return 0;
    }
    if (number < 0) {
        number = -number;
    }
    while (number > 0) {
        int digit = number % 10;
        count[digit]++;
        number = number / 10;
    }
    
    int maxCount = -1;
    int resultDigit = -1;
    int i;
    
    for (i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            resultDigit = i;
        }
    }
    
    return resultDigit;
}

int main() {
    long long inputNum;
    
    printf("Welcome to the Most Frequent Digit Finder!\n");
    printf("Enter a whole number (integer): ");
    
    scanf("%lld", &inputNum);
    
    int mostFrequent = freqdigit(inputNum);
    
    printf("The number you entered was: %lld\n", inputNum);
    printf("The digit that occurred the most times is: %d\n", mostFrequent);
    
    return 0;
}
