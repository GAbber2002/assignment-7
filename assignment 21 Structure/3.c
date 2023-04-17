#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100

struct employee
{
    char name[50];
    int age;
    float salary;
};
void display_employee_data(struct employee* employees, int num_employees)
{
    printf("\nEmployee Data:\n");

    for (int i = 0; i < num_employees; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }
}


int main()
{
    struct employee employees[5];
    int i;

    printf("Enter the number of employees: ");
    scanf("%d", &i);

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter employee %d data:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    display_employee_data(employees, i);

    return 0;
}
