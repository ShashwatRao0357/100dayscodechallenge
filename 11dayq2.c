#include <stdio.h>

int main() {
    float cp, sp, pl, perc;
    
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    
    if (sp > cp) {
        // Profit calculation
        pl = sp - cp;
        perc = (pl / cp) * 100;
        printf("Profit %.2f%%\n", perc);
    }
    else if (sp < cp) {
        // Loss calculation
        pl = cp - sp;
        perc = (pl / cp) * 100;
        printf("Loss %.2f%%\n", perc);
    }
    else {
        // No profit, no loss
        printf("No Profit No Loss\n");
    }
    
    return 0;
}