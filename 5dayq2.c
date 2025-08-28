#include <stdio.h>

int main() {
    int total_sec;
    
    scanf("%d", &total_sec);
    
    int hrs = total_sec / 3600;
    int min = (total_sec % 3600) / 60;
    int sec = total_sec % 60;
    
    printf("%d:%d:%d\n", hrs,min,sec);
    
    return 0;
}