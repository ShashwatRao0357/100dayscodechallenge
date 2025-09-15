#include <stdio.h>

int main() {
    int n, dig, pro = 1, odd = 0;
    scanf("%d", &n);
    int t = n; 

    if (n == 0) {
        printf("1\n");
        return 0;
    }

    while (t > 0) {
        dig = t % 10;
        if (dig % 2 != 0) {
            pro *= dig;
            odd = 1;
        }
        t /= 10;
    }

    printf("%d\n", odd ? pro : 1);
    return 0;
}
