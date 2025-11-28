#include <stdio.h>

// Define structure
struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    // Structure variable
    struct Student s1;

    // Pointer to structure
    struct Student *ptr = &s1;

    // Taking input using -> operator
    printf("Enter name: ");
    scanf("%19s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Displaying data using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
