#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for first struct
    printf("Enter details for Student 1:\n");
    printf("Roll: ");
    scanf("%d", &s1.roll);

    printf("Name: ");
    scanf("%s", s1.name);

    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input for second struct
    printf("\nEnter details for Student 2:\n");
    printf("Roll: ");
    scanf("%d", &s2.roll);

    printf("Name: ");
    scanf("%s", s2.name);

    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare
    if (s1.roll == s2.roll &&
        strcmp(s1.name, s2.name) == 0 &&
        s1.marks == s2.marks) {

        printf("\nBoth structs are IDENTICAL.\n");
    } else {
        printf("\nStructs are NOT identical.\n");
    }

    return 0;
}
