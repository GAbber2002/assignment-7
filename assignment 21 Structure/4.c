#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_EMPLOYEES 10

struct employee
{
    char name[50];
    int age;
    float salary;
};

struct employee find_highest_salary_employee(struct employee* employees, int i)
{
    struct employee highest_salary_employee = employees[0];

    for (int i = 1; i < 5; i++)
    {
        if (employees[i].salary > highest_salary_employee.salary)
        {
            highest_salary_employee = employees[i];
        }
    }

    return highest_salary_employee;
}

int main()
{
    struct employee employees[NUM_EMPLOYEES] = {
        {"John Doe", 25, 50000.0},
        {"Jane Smith", 30, 60000.0},
        {"Bob Johnson", 35, 75000.0},
        {"Mary Lee", 40, 80000.0},
        {"Tom Williams", 45, 90000.0},

    };

    struct employee highest_salary_employee = find_highest_salary_employee(employees, NUM_EMPLOYEES);

    printf("The employee with the highest salary is:\n");
    printf("Name: %s\n", highest_salary_employee.name);
    printf("Age: %d\n", highest_salary_employee.age);
    printf("Salary: %.2f\n", highest_salary_employee.salary);

    return 0;
}
