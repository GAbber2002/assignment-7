#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct employee employees[MAX_EMPLOYEES];
    int num_employees;
    char input[100];

    printf("Enter the number of employees: ");
    fgets(input, 100, stdin);
    num_employees = atoi(input);

    for (int i = 0; i < num_employees; i++)
    {
        printf("\nEnter employee %d data:\n", i + 1);
        printf("Name: ");
        fgets(employees[i].name, 50, stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // remove newline character
        printf("Age: ");
        fgets(input, 100, stdin);
        employees[i].age = atoi(input);
        printf("Salary: ");
        fgets(input, 100, stdin);
        employees[i].salary = atof(input);
    }

    printf("\nEmployee Data:\n");

    for (int i = 0; i < num_employees; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
