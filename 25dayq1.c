#include <stdio.h>

int main() {
    int r = 5;

    for (int i = 1; i <= r; i++) {
        int s = r - i + 1;  
        for (int j = s; j <= r; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
