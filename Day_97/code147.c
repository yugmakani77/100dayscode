#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee emp, emp_read;

    // Input from user
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

    // Writing to binary file
    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Reading from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("\n--- Data Read From File ---\n");
    printf("Name          : %s\n", emp_read.name);
    printf("ID            : %d\n", emp_read.id);
    printf("Salary        : %.2f\n", emp_read.salary);
    printf("Joining Date  : %02d-%02d-%d\n",
           emp_read.joining_date.day,
           emp_read.joining_date.month,
           emp_read.joining_date.year);

    return 0;
}
