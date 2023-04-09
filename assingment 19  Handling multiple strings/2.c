#include <stdio.h>

int main()
{
    char cities[10][50];
    char temp[50];

    printf("Enter 10 city names:\n");


    for (int i = 0; i < 10; i++)
    {
        fgets(cities[i], 50, stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';

    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (strcmp(cities[i], cities[j]) > 0)
            {
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }

    printf("\nSorted city names:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", cities[i]);
    }

    return 0;
}
