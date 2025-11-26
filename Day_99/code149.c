#include <stdio.h>
#include <stdlib.h>

// Define a structure
struct Student {
    int roll;
    float marks;
    char name[30];
};

int main() {
    // Pointer to structure
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input data
    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    printf("Enter name: ");
    scanf("%s", s->name);

    // Print details
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);
    printf("Name: %s\n", s->name);

    // Free memory
    free(s);

    return 0;
}
