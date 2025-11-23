#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that returns the student with highest marks
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   // return the structure
}

int main() {
    struct Student students[5], topper;
    int i;

    // Input 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Get top student
    topper = getTopStudent(students, 5);

    // Print topper details
    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
