#include <stdio.h>
#include <string.h>

int main()
{
    char strings[5][20] = {"apple", "banana", "orange", "grape", "pear"};
    char search_string[20];
    int found = 0;

    printf("Enter a string to search for:\n");
    fgets(search_string, 20, stdin);
    search_string[strcspn(search_string, "\n")] = '\0';

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(strings[i], search_string) == 0)
        {
            printf("Found string at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("String not found\n");
    }

    return 0;
}
