#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status result;

    // Example: set the status (you can change this)
    result = TIMEOUT;

    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out. Check your connection.\n");
            break;
    }

    return 0;
}
