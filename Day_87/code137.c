#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum Role role;

    printf("Select Role:\n");
    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");
    printf("Enter your choice: ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Hello, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome, Guest! You can browse freely.\n");
            break;

        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
