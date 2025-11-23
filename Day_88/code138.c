#include <stdio.h>

enum Color {
    RED = 1,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    enum Color c;

    // String array for names
    const char *names[] = {"", "RED", "GREEN", "BLUE", "YELLOW"};
    // Index 0 is unused because enum starts from 1

    printf("Enum names and values:\n\n");

    for (c = RED; c <= YELLOW; c++) {
        printf("%s = %d\n", names[c], c);
    }

    return 0;
}
