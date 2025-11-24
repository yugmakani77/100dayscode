#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining_date;  // Nested structure
};

int main() {
    struct Employee emp;

    // Taking input
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d",
          &emp.joining_date.day,
          &emp.joining_date.month,
          &emp.joining_date.year);

    // Printing details
    printf("\n--- Employee Details ---\n");
    printf("Name          : %s\n", emp.name);
    printf("ID            : %d\n", emp.id);
    printf("Salary        : %.2f\n", emp.salary);
    printf("Joining Date  : %02d-%02d-%d\n",
           emp.joining_date.day,
           emp.joining_date.month,
           emp.joining_date.year);

    return 0;
}
