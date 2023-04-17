#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_EMPLOYEES 10

struct employee {
    char name[50];
    int age;
    float salary;
};

int compare_salaries(const void* a, const void* b) {
    const struct employee* employeeA = (const struct employee*)a;
    const struct employee* employeeB = (const struct employee*)b;

    if (employeeA->salary < employeeB->salary) {
        return -1;
    } else if (employeeA->salary > employeeB->salary) {
        return 1;
    } else {
        return 0;
    }
}

void sort_employees_by_salary(struct employee* employees, int num_employees) {
    qsort(employees, num_employees, sizeof(struct employee), compare_salaries);
}

void display_employee_data(struct employee* employees, int num_employees) {
    printf("\nEmployee Data:\n");

    for (int i = 0; i < num_employees; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }
}

int main() {
    struct employee employees[NUM_EMPLOYEES] = {
        {"John Doe", 25, 50000.0},
        {"Jane Smith", 30, 60000.0},
        {"Bob Johnson", 35, 75000.0},
        {"Mary Lee", 40, 80000.0},
        {"Tom Williams", 45, 90000.0},
        {"Samantha Green", 50, 100000.0},
        {"David Brown", 55, 120000.0},
        {"Julie Davis", 60, 150000.0},
        {"Chris Wilson", 65, 200000.0},
        {"Sarah Taylor", 70, 250000.0}
    };

    sort_employees_by_salary(employees, NUM_EMPLOYEES);
    display_employee_data(employees, NUM_EMPLOYEES);

    return 0;
}
