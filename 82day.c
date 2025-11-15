#include <stdio.h>
#include <string.h>

enum TrafficLight {RED, YELLOW, GREEN};

int main() {
    char input[10];
    enum TrafficLight light;

    printf("Enter traffic light color (RED, YELLOW, GREEN): ");
    scanf("%s", input);

    if(strcmp(input, "RED") == 0) {
        light = RED;
    } else if(strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if(strcmp(input, "GREEN") == 0) {
        light = GREEN;
    } else {
        printf("Invalid input\n");
        return 1;
    }

    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }
    return 0;
}
