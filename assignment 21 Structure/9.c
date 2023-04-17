#include <stdio.h>

struct Student
{
    char name[50];
    int rollNumber;
    int age;
};

int main()
{
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter information for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    printf("Student Information:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Age: %d\n", students[i].age);
    }

    return 0;
}
