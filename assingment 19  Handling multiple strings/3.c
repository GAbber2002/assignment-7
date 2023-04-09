#include <stdio.h>


int main()
{
    char strings[3][20];

    printf("Enter 3 strings:\n");


    for (int i = 0; i < 3; i++)
    {
        fgets(strings[i], 20, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';

    }

    printf("\nStrings entered:\n");


    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}
