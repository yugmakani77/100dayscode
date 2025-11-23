#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", (int*)&p.gender);

    // Output
    printf("\nName: %s\n", p.name);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
        default:     printf("Invalid Gender\n");
    }

    return 0;
}
