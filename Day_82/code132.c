#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight signal;

    // Example: Set the traffic light value
    signal = RED;   // You can change this to YELLOW or GREEN

    if (signal == RED)
        printf("Signal: RED -> Stop\n");
    else if (signal == YELLOW)
        printf("Signal: YELLOW -> Wait\n");
    else if (signal == GREEN)
        printf("Signal: GREEN -> Go\n");

    return 0;
}
