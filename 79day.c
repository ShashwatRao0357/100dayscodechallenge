#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0, sum = 0;
    float average;
    
    fp = fopen("numbers.txt", "r");
    if(fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }
    
    while(fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    
    fclose(fp);
    
    if(count > 0) {
        average = (float)sum / count;
        printf("Sum = %d\nAverage = %.2f\n", sum, average);
    } else {
        printf("No integers found in the file.\n");
    }
    
    return 0;
}
