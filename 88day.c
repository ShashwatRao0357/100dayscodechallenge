#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

const char* ColorNames[] = {
    "RED",
    "YELLOW",
    "GREEN"
};

enum ColorCount {
    COLOR_COUNT = GREEN + 1
};

int main() {
    for (int i = 0; i < COLOR_COUNT; i++) {
        printf("%s=%d\n", ColorNames[i], i);
    }

    return 0;
}