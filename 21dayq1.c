#include <stdio.h>
#include <math.h>

int main() {
    int num, fd, ld, dig, swn;

    scanf("%d", &num);

    ld = num % 10;

    dig = (int)log10(num);

    fd = (int)(num / pow(10, dig));

    swn = ld;
    swn *= (int)pow(10, dig);
    swn += num % (int)pow(10, dig);
    swn -= ld;
    swn += fd;

    printf("%d\n", swn);
    return 0;
}
