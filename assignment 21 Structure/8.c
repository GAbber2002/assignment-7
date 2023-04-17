#include <stdio.h>

struct Student
{
    char name[50];
    int rollNumber;
    int age;
};

int main()
{
    struct Student students[10];
    int i;


    for (i = 0; i < 10; i++)
    {
        printf("Enter information for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // display student information
    printf("Student Information:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Age: %d\n", students[i].age);
    }

    return 0;
}
