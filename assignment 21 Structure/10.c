#include <stdio.h>

struct Marks
{
    int rollNumber;
    char name[50];
    int chemMarks;
    int mathsMarks;
    int phyMarks;
};

int main()
{
    int i;
    float percentage;

    struct Marks students[5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter information for student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Chemistry Marks: ");
        scanf("%d", &students[i].chemMarks);
        printf("Mathematics Marks: ");
        scanf("%d", &students[i].mathsMarks);
        printf("Physics Marks: ");
        scanf("%d", &students[i].phyMarks);
    }

    printf("Student Percentage:\n");
    for (i = 0; i < 5; i++)
    {
        percentage = (students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks) / 3.0;
        printf("%s's percentage: %.2f\n", students[i].name, percentage);
    }

    return 0;
}
